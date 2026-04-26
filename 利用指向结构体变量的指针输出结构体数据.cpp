#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student
{
	int num;
	char name[20];
	char sex;
	int score;
}a;
int main()
{
	struct Student a;
	struct Student *p;
	p=&a;
	a.num=10101;
	strcpy(a.name,"Li Lin");
	a.sex='M';
	a.score=96;
	printf("%d  %s  %c  %d\n",a.num,a.name,a.sex,a.score);
	printf("%d  %s  %c  %d\n",(*p).num,(*p).name,(*p).sex,(*p).score);
	system("pause");
	return 0;
}
