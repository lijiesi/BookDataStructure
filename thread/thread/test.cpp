#include <iostream>
#include "windows.h"
int handleCommand()
{
	Sleep(4000);
	return 0;
}
int main()
{
	while (1)
	{
		printf("> ");
		char cmdline[128];
		gets_s(cmdline);
		printf("������.......\n");
		if (strcmp(cmdline,"1")==0)
		{
			handleCommand();
		}
		printf("�������.......\n");
	}
	return 0;
}