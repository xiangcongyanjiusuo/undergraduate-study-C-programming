#include<stdio.h>
#include<stdlib.h>
int mian()
{
	struct Student
	{
		int num;
		char name[20];
		char sex;
		char adds[20];
	}; 
	struct Student a={.name="Li Hua"};
	printf("学号:%d\n姓名:%s\n性别:%c\n住址:%s\n",a.num,a.name,a.sex,a.adds);
	system("pause");
	return 0;
}
