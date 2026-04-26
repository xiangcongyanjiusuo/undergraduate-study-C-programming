#include<stdio.h>
#include<stdlib.h>
int main() 
{
	int a,t;
	a=1;
	t=0;
	do
	{
		t+=a;
		a++;
	}while(a<=100);
	printf("%d",t);
	system("pause");
	return 0;
} 
