#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[4]={1,2,3,4};
	int (*p)[4];
	p=&a;
	printf("%d",(*p)[3]);
	system("pause");
	return 0;
}
