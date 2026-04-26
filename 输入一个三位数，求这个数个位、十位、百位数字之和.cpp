#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,a,b,c,n;
	printf("输入一个三位数，求这个数个位、十位、百位数字之和\n");
	scanf("%d",&x);
	a=x/100%10;
	b=x/10%10;
	c=x%10;
	n=a+b+c;
	printf("%d",n);
	system("pause");
	return 0;
}
