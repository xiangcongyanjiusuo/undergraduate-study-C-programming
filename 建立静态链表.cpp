#include<stdio.h>
#include<stdlib.h>
#define N 20
struct Student
{
	int num;
	char name[N];
	struct Student *next;
}a={10101,"Li"},b={10102,"zhang"},c={10103,"Wang"};
int main()
{
	struct Student *p,*head;
	head=&a;
	a.next=&b;
	b.next=&c;
	c.next=NULL;
	p=head;
	do
	{
		printf("%d %s\n",p->num,p->name);
		p=p->next;
	}while(p!=NULL);
	system("pause");
	return 0;
}

