#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a[5][11];
	int i;
	for(i=0;i<=4;i++)
		gets(a[i]);
	for(i=0;i<=4;i++)
		puts(a[i]);
	system("pause");
	return 0;
} 
