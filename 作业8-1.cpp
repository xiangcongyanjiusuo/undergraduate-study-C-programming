#include<stdio.h>
#include<stdlib.h>
void fun(int,int);
int main()
{
	int a,b,t;
	printf("请输入两个数，下面求它们的最大公约数\n");
	scanf("%d%d",&a,&b);
	fun(a,b);
	system("pause");
	return 0; 
}
void fun(int a,int b)
{
	int m,i;
	if(a<b)	m=b;
	else	m=a;
	for(i=m;i>=0;i--)
		if(a%i==0&b%i==0)
		{	printf("%d",i);	break;}
		
}

