#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a;
	int i=1;
	int **b;
	a=&i;
	b=a;
	printf("%d",**b);
	return 0;
}
