#include<stdio.h>
#include<stdlib.h>
void print(struct Student []);
struct Student
{
	char name[20];
	int num;
	char sex;
	char job;
	union
	{
		int clas;
		char position[10];
	}category;
}person[2];
int main()
{
	int i;
	struct Student *p;
	p=person;
	for(i=0;i<2;i++)
	{
		printf("请输入前四项:姓名、学号、性别、职业\n");
		scanf("%s %d %c %c",p->name,&p->num,&p->sex,&p->job);
		p++;
	}
	
	p=person;
	for(i=0;i<2;i++)
	{
		if(person[i].job=='s')
		{
			printf("请输入第%d次输入的学生的班级\n",i);
			scanf("%d",&person[i].category.clas);
		}
		else if(person[i].job=='t')
		{
			printf("请输入第%d次输入的教师的职位\n",i);
			scanf("%s",person[i].category.position);
		}
		else
			printf("输入错误\n");
	}
	print(person);
	system("pause");
	return 0;
}
void print(struct Student pi[])
{
	int i;
	for(i=0;i<2;i++)
	{
		if(person[i].job=='s')
			printf("%5s%4d%5c%4c%4d\n",pi[i].name,pi[i].num,pi[i].sex,pi[i].job,pi[i].category.clas);
		if(person[i].job=='t')
			printf("%5s%4d%5c%4c%6s\n",pi[i].name,pi[i].num,pi[i].sex,pi[i].job,pi[i].category.position);
	}
}

