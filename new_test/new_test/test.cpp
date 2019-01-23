#include<iostream>
#include "engine.h"
#pragma comment(lib,"libeng.lib")
#pragma comment(lib,"libmx.lib")
#pragma comment(lib,"libmat.lib")
int main()
{
	Engine *ep;
	if (!(ep = engOpen("\0")))
	{
		fprintf(stderr,"\n can't open matlab engine\n");
		return EXIT_FAILURE;
	}
	else
	{
		fprintf(stderr,"\n can open matlab engine\n");
	}
	return 0;
}