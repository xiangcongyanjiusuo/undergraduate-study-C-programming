#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,t;
	t=1;
	printf("请输入一个从1到9的数，下面计算它的阶乘"); 
	scanf("%d",&a);
	while(a>0&&a<=9)
	{
		t*=a;
		a--;
	}
	printf("%d",t);
	system("pause");
	return 0;
}
