#include<stdio.h>
#include<stdlib.h>
struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
}a[3];
int main()
{
	struct Student a[3]={{10101,"Li Lin",'M',18},{10102,"Zhang Feng",'F',19},{10103,"Li Zheng",'M',20}};
	struct Student *p;
	for(p=a;p<a+3;p++)
	{
		printf("%d %s %c %d\n",p->num,p->name,p->sex,p->age);
	}
	system("pause");
	return 0;
} 
