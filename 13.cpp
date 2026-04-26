#include<stdio.h>
#include<stdlib.h>
typedef int * cm;

void ct(cm x)
{
	x=(cm)malloc(sizeof(int));
	*x=9;
}
int main()
{
	cm x;
	ct(x);
	printf("%d",x);
	return 0;
}
