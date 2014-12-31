// Day9_Heap.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdlib.h>
#include <string.h>



//int b=20;
int _tmain(int argc, _TCHAR* argv[])
{
	char *p1="name";
	char *p2;
	p2=(char*)malloc(20);
	memset(p2,0,20);
	while(*p2++=*p1++){
		printf("%s",p2-1);
	}
	printf("\n");
	//static int a=10;

	char *p="Hello World";
	*p++;
	printf("%s\n",p);
	p++;
	printf("%s\n",p);
	return 0;
}

