#include<stdio.h>
#include<stdlib.h>
void check(int *);
int main()
{
	int *p,i;
	p=(int*)malloc(5*sizeof(int));
	for(i=0;i<=4;i++)
	{
		printf("请输入一个学生的成绩，后面将会输出不及格学生的成绩");
		scanf("%d",p+i);
	}
	check(p);
	system("pause");
	return 0;
}
void check(int *p)
{
	int i;
	for(i=0;i<5;i++)
		if(*(p+i)<60)	printf("%d  ",*(p+i));
	printf("\n");
}
