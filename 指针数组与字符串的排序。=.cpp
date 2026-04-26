#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sort(char *[],int);
void printfc(char *[],int);
int main()
{
	int n=5;
	char *a[]={"Follow me","BASIC","Great Wall","FORTRAN","Computer design"};
	sort(a,n);
	printfc(a,n);
	system("pause");
	return 0;
}
void sort(char *a[],int n)
{
	char *t;
	int i,j;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(strcmp(a[i],a[j])>0)	
			{
				t=a[i];	a[i]=a[j];	a[j]=t;
			}
}
void printfc(char *a[],int n)
{
	int i=0;
	char *p;
	p=a[0];
	while(i<n)
	{
		p=*(a+i++);
		printf("%s  ",p);
	} 
}
