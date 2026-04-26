#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct Student
	{
		int num;
		char name[20];
		int score;
	}a,b;
	printf("请依次输入一名同学的学号、姓名、成绩\n"); 
	scanf("%d%s%d",&a.num,a.name,&a.score);
	printf("请依次输入另一名同学的学号、姓名、成绩\n");
	scanf("%d%s%d",&b.num,b.name,&b.score);
	printf("下面按成绩从高到底排序\n");
	if(a.score>=b.score)
	{
		printf("学号:%d  姓名:%s  成绩:%d\n",a.num,a.name,a.score);
		printf("学号:%d  姓名:%s  成绩:%d\n",b.num,b.name,b.score);
		printf("\n");
	}
	else
	{
		printf("学号:%d  姓名:%s  成绩:%d\n",b.num,b.name,b.score);
		printf("学号:%d  姓名:%s  成绩:%d\n",a.num,a.name,a.score);
		printf("\n");
	}
	system("pause");
	return 0;
} 
