#include<stdio.h>
#include<stdlib.h>
#define N 3
void input(struct Student a[]);
struct Student max(struct Student a[]);
void print(struct Student a);
struct Student
{
	int num;
	char name[20];
	int aver;
	int score[3];
}; 

int main()
{
	struct Student a[N],*p=a;
	input(p);
	print(max(p));
	system("pause");
	return 0;
}
void input(struct Student a[])
{
	int i;
	for(i=0;i<N;i++)
	{
		printf("请输入各学生的信息：学号、姓名、3门课的成绩\n");
		scanf("%d%s%d%d%d",&a[i].num,a[i].name,&a[i].score[0],&a[i].score[1],&a[i].score[2]); 
		a[i].aver=(a[i].score[0]+a[i].score[1]+a[i].score[2])/3;
	}
}
struct Student max(struct Student a[])
{
	int i;
	struct Student t;
	for(i=0;i<N-1;i++)
		{if(a[i].aver<a[i+1].aver)	t=a[i+1];
			else t=a[i];}
	return t;
}
void print(struct Student a)
{
	printf("成绩最高的学生是：\n");
	printf("学号：%d姓名：%s平均成绩：%d三门成绩：%d  %d  %d",a.num,a.name,a.aver,a.score[0],a.score[1],a.score[2]);
}
