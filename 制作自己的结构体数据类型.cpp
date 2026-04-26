#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct Student
	{
		long int num;
		char name[20];
		char sex;
		char adds[20];
	}a={10101,"Li lin",'M',"HuaXian"};
	printf("学号:%ld\n姓名:%s\n性别:%c\n住址:%s\n",a.num,a.name,a.sex,a.adds);
	system("pause");
	return 0;
}
