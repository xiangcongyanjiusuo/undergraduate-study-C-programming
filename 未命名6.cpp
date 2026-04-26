#include<stdio.h>
int sum(int a,int b)
{
	int sum;
	printf("%d\n",a);
	sum=a+b;
	return (sum);
}
int main()
{
	int e,d,f;
	scanf("%d%d",&e,&d);
	f=sum(e,d);
	printf("%d",f);
	return 0;
}
