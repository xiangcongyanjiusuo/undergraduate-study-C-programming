#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Person
{	
	char name[20];
	int num;
}a[3]={"Li",0,"Yang",0,"Su",0};
int main()
{
	int i,j;
	char m[20];
	for(i=0;i<=4;i++)
	{
		printf("请输入候选人名\n"); 
		scanf("%s",m);
		for(j=0;j<=2;j++)
			{if(strcmp(m,a[j].name)==0)	a[j].num++;}
	}
	for(i=0;i<=2;i++)
	{
		printf("%s%d",a[i].name,a[i].num);
	}
	system("pause");
	return 0;
}
