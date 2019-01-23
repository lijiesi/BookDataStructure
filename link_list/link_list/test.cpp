#include <iostream>
#define ERROR 1
#define OK 1
#define FALSE 1
#define  TRUE 1
#define MAXSIZE 30
typedef char Element;
typedef int status;
typedef struct
{
	Element data;
	int cur;
}staticlist[MAXSIZE];
status Inintial(staticlist list)
{
	int i;
	for (i = 0; i < MAXSIZE - 1;i++)
	{
		list[i].cur = i + 1;
	}
	list[MAXSIZE - 1].cur = 0;
	return OK;
}
status Lengtlist(staticlist list)
{
	int j=0, k;
	k = MAXSIZE - 1;
	while (list[k].cur)
	{
		k = list[k].cur;
		j++;
	}
	return j;
}
status MALLOC_DDL(staticlist list)
{
	int j;
	j = list[0].cur;
	if (list[0].cur)
	{
		list[0].cur = list[j].cur;
	}
	return j;
}
status Insertlist(staticlist list, int i, Element e)
{
	int j, k;
	k = MAXSIZE - 1;
	j = MALLOC_DDL(list);
	if (j)
	{
		list[j].data = e;
		for (int l = 1; l <= i - 1;l++)
		{
			k = list[k].cur;
		}
		list[j].cur = list[k].cur;
		list[k].cur = j;
	}
	return OK;
}
int main()
{
	staticlist list;
	Inintial(list);
	int j = Lengtlist(list);
	printf("初始化后的静态链表长度: %d\n", j);
	Insertlist(list, 1, 'F');
	Insertlist(list, 1, 'E');
	j = Lengtlist(list);
	printf("插入后的静态链表的长度: %d\n", j);
	return 0;
}