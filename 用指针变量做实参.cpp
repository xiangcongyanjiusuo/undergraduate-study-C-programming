#include<stdio.h>
#include<stdlib.h>
void ex(int *,int);
int main()
{
	int i,a[10]={3,7,9,11,0,6,7,5,4,2};
	int *p;
	printf("begin");
	for(p=a;p<(a+10);p++)
		printf("%d",*p);
	p=a;
	ex(p,10);
	printf("\n");
	printf("now");
	for(p=a;p<(a+10);p++)
		printf("%d",*p);
	system("pause");
	return 0;
}
void ex(int *a,int n)
{
	int t,*i,*j,m;
	m=(n-1)/2;
	i=a; j=a+n-1; 
	for(;i<=a+m;i++,j--)
	{t=*i;	*i=*j;	*j=t;};
	return;
}
