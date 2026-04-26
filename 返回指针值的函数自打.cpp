#include<stdio.h>
#include<stdlib.h>
int *xs(int (*)[4],int);
int main()
{
	int a[][4]={{15,32,44,96},{59,64,47,31},{79,62,34,57}};
	int *p,n,i;
	printf("请输入学生的序号，下面输出他的成绩\n");
	scanf("%d",&n);
	p=xs(a,n);
	for(i=0;i<=3;i++)
	{
		printf("%d  ",*(p+i));
	}
	system("pause");
	return 0;
}
int *xs(int (*p)[4],int n)
{
	int *z;
	z=*(p+n-1);
	return z;
}
