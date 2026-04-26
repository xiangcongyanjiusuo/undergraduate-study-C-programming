#include<stdio.h>
#include<stdlib.h>

void scan(int *p)
{
	int i,j;
	for(i=0;i<=4;i++)
		for(j=0;j<=4;j++)
			scanf("%d",(p+i*5+j));
	return ;	
}

void print(int *p)
{
	int i,j;
	for(i=0;i<=4;i++)
		for(j=0;j<=4;j++)
			printf("%d",*(p+i*5+j));
	return ;
}

int main()
{
	int n,*p;
	
	p=(int *)malloc(4*5*5);
	scan(p);
	print(p);
	
	return 0;
}
