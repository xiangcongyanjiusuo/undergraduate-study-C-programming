#include<stdio.h>
#include<stdlib.h>
void ex(int *,int);
int main()
{
	int i,a[10]={3,7,9,11,0,6,7,5,4,2};
	printf("begin");
	for(i=0;i<10;i++)
		printf("%d",a[i]);
	printf("\n");
	ex(a,10);
	printf("now");
	for(i=0;i<10;i++)
		printf("%d",a[i]);
	system("pause");
	return 0;
}
void ex(int *a,int n)
{
	int *p,t,*i,*j,m=(n-1)/2;
	i=a;
	j=a+n-1;
	p=a+m;
	for(;i<=p;i++,j--)
	{
		t=*i;*i=*j;*j=t;
	}
	return;
}
