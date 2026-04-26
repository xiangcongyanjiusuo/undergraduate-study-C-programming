#include<stdio.h>
#include<stdlib.h>
struct Student
{
	char name[20];
	int a;
	int b;
	char adds[20];
	char m;
}stu;
int main()
{
	printf("ÇëÒÀ´ÎÊäÈë%%s,%%d,%%d,%%s,%%c\n");
	scanf("%s%d%d%s %c",stu.name,&stu.a,&stu.b,stu.adds,&stu.m);
	printf("%s%d%d%s%c",stu.name,stu.a,stu.b,stu.adds,stu.m);
	system("pause");
	return 0;
}
