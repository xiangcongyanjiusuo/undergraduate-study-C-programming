#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	a=100;				//初始值从100开始 
	while(a>0)			//请注意这里的循环结构变为a>0 
	{
		printf("%d\n",a);
		a=a-1;			//每循环一次将a的值递减 
	}
	system("pause");
	return 0;
}
