#include<stdio.h>
#include<stdlib.h>
int fun(int ,int ,int (*)(int,int));
int max(int,int);
int min(int,int);
int add(int,int);
int main()
{
	int a,b,t;
	printf("请输入两个数\n");
	scanf("%d%d",&a,&b);
	printf("请输入1，2或3，根据输入不同实现不同目标\n");
	scanf("%d",&t);
	if(t==1)	fun(a,b,max);
	else if(t==2)	fun(a,b,min);
	else if(t==3)	fun(a,b,add);
	else printf("error");
}
int fun(int a,int b,int(*p)(int,int))
{
	int result;
	result=(*p)(a,b);
	printf("%d\n",result);
}
int max(int a,int b)
{
	return a>b?a:b;
}
int min(int a,int b)
{
	return a>b?b:a;
}
int add(int a,int b)
{
	int z;
	return z=a+b; 
}
