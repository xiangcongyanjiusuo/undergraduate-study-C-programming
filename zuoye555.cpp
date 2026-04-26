#include<stdio.h>
#include<stdlib.h>
void print(struct Student []);
struct Student
{
	int num;
	char name[20];
	char job;
	union
	{
		int clas;
		char position[10];
	}category;
}person[6];
int main()
{
	int i;
	struct Student *p;
	p=person;
	for(i=0;i<=5;i++)
	{
		printf("请输入前四项:号码、姓名、职业(s or w)\n");
		scanf("%d %s %c",&person[i].num,person[i].name,&person[i].job);
		if(person[i].job=='s')
		{
			printf("请输入学生的班级\n",i);
			scanf("%d",&person[i].category.clas);
		}
		else if(person[i].job=='w')
		{
			printf("请输入工人的职务\n",i);
			scanf("%s",person[i].category.position);
		}
		else
			printf("输入错误\n");
		p++;
	}
	
	print(person);
	system("pause");
	return 0;
}
void print(struct Student pi[])
{
	int i;
	for(i=0;i<6;i++)
	{
		if(person[i].job=='s')
			printf("%4d%5s%5c%4c%4d\n",pi[i].num,pi[i].name,pi[i].job,pi[i].category.clas);
		if(person[i].job=='w')
			printf("%4d%5s%5c%4c%6s\n",pi[i].num,pi[i].name,pi[i].job,pi[i].category.position);
	}
}

