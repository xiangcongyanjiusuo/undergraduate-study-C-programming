#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	printf("请输入成绩0-100\n"); 
	scanf("%d",&a);
	switch(a/10)
	{
		case (10):
		case (9):printf("优");break;
		case (8):printf("良");break;
		case (7):printf("中");break;
		case (6):printf("及格");break;
		default:printf("不及格"); 
	}
	system("pause");
	return 0;
}
