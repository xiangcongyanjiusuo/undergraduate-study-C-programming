#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a<=100&&a>=90)
		printf("优");
	if(a<90&&a>=80)
		printf("良");
	if(a<80&&a>=70)
		printf("中");
	if(a<70&&a>=60)
		printf("及格");
	if(a<60&&a>=0)
		printf("不及格");
	system("pause"); 
	return 0;
}
