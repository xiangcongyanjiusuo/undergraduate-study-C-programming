#include<stdio.h>
#include<stdlib.h>
int main()
{
	const int a[10]={1,2,3},*p;
	int b[10]={1,2,3},i;
	for(p=a;p<a+10;p++)
		printf("%d",*p);
	system("pause");
	return 0;
}
