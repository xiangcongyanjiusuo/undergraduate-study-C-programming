#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct Student)
struct Student
{
	int num;
	int score;
	struct Student *next;
};
int n;
struct Student *creat(void)
{
	struct Student *head;
	struct Student *p1,*p2;
	n=0;
	p1=p2=(struct Student *)malloc(LEN);
	printf("请输入第一名学生的学号，成绩\n");
	scanf("%d%d",&p1->num,&p1->score);
	head=NULL;
	while(p1->num!=0)
	{
		n=n+1;
		if(n==1)	head=p1;
		else	p2->next=p1;
		p2=p1;
		p1=(struct Student *)malloc(LEN);
		printf("请输入下一名同学的学号，成绩\n");
		scanf("%d%d",&p1->num,&p1->score);
	}
	p2->next=NULL;
	return(head);
}
void printfl(struct Student *head)
{
	struct Student * p;
	printf("\nNow,These %d records are :\n",n);
	p=head;
	if(head!=NULL)
		do
		{
			printf("%d  %d\n",p->num,p->score);
			p=p->next;
		}while(p!=NULL);
}
int main()
{
	struct Student *head;
	head=creat();
	printfl(head);
	system("pause");
	return 0;
}
