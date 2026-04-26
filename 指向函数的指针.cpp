#include<stdio.h>
#include<stdlib.h>
int max(int,int);
int min(int,int);
int main()
{
	int (*p)(int,int);
	int a,b,t,z;
	printf("请输入两个数\n");
	scanf("%d%d",&a,&b);
	printf("请输入1或2，输入1则输出最大值，输入2则输出最小值\n");
	scanf("%d",&t);
	if(t==1)	p=max;
	if(t==2)	p=min;
	z=(*p)(a,b);
	printf("%d",z);
}
int max(int a,int b)
{
	return a>b?a:b;
}
int min(int a,int b)
{
	return a>b?b:a;
}
