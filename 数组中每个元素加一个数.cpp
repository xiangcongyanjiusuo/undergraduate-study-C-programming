#include<stdio.h>
#include<stdlib.h>
void add(double [],int,int);
int main()
{
	double a[10],t=1.1,d;
	int m=2;
	int i;
	for(i=0;i<10;i++)
	{	
		a[i]=t;
		t++; 
	}
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
	i=9; 
	add(a,i,m);
	
}
void add(double a[],int b,int c)
{
	int i;
	for(i=0;i<b+1;i++)
		*a+=c;
	for(i=0;i<b+1;i++)
		printf("%d ",*a+i);
}

 
