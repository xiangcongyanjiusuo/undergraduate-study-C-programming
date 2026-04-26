#include<stdio.h>
#include<stdlib.h>
#define pi 12
int sort1(int *,int);
int sort2(int (*)[4],int);
int main()
{
	int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int t,d,n;
	printf("请输入1~3，下面输出该学生的四门成级以及所有学生的成绩平均数\n");
	scanf("%d",&n);
	t=sort1(*a,pi);
	printf("%d\n",t);
//	d=sort2(a,n);
	system("pause");
	return 0;
}
int sort1(int *a,int n)
{
//	int *p,*m;
//	p=a;	m=a+n-1;
	int ave,t=0;
	for(;a<=(a+n-1);a++)
		t+=*a;
	ave=t/n;
	return ave;
}
/*int sort2(int (*p)[4],int n)
{
	int i;
	for(i=0;i<4;i++)
		printf("%d ",*(*(p+n-1)+i));
}*/
