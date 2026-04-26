#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;	char op;
	printf("这是一个简易的计算器，请依次输入操作数1`运算符op`操作数2\n");
	scanf("%d%c%d",&a,&op,&b);
	switch(op)
	{
		case ('+'):printf("%d",a+b);break;
		case ('-'):printf("%d",a-b);break;
		case ('*'):printf("%d",a*b);break;
		case ('/'):printf("%d",a/b);break;
		default:printf("error");
	 } 
	 system("pause");
	 return 0;
} 
