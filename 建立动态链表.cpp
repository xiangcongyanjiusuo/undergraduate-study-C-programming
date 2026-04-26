#include<stdio.h>
#include<stdlib.h>
#define zj sizeof(struct Student)
struct Student
{
	int num;
	int score;
	struct Student *next;
};
int n;
struct Student *creat(void);
void printfl(struct Student a[]);
int main()
{
	struct Student *pt;
	pt=creat();
	printfl(pt);
	system("pause");
	return 0;
}
struct Student *creat(void)
{
	struct Student *p1,*head,*p2;
	head=(struct Student *)malloc(zj);
	p1=head;
	printf("请输入第一个学生的学号和成绩\n");
	scanf("%d%d",&p1->num,&p1->score);
	n=1;
	p2=head->next;
	while(p1->num!=0)
	{
		printf("请输入下一个学生的学号和成绩，如果想停止输入则输入学号为0\n");
		p1=(struct Student *)malloc(zj);
		p2->next=p1;
		scanf("%d%d",&p1->num,&p1->score);
		n++;
	}
	p2=NULL;
	return(head);
}
void printfl(struct Student *a)
{
	struct Student * pt;
	pt=a;
	do
	{
		printf("%d %d\n",pt->num,pt->score);
		pt=pt->next;
	}while(pt!=NULL);
}

