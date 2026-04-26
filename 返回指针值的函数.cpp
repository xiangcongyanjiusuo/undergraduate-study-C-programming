#include<stdio.h>
#include<stdlib.h>
int *search(int (*p)[4],int);
int main()
{
	int a[][4]={{45,69,71,52},{85,17,53,64},{96,100,76,120}};
	int *p;
	int i,k; 
	printf("请输入学生的号码");
	scanf("%d",&k);
	printf("这个学生的成绩是%d\n",k);
	p=search(a,k);
	for(i=0;i<=3;i++)
	{
		printf("%d  ",*(p+i));
	} 
	system("pause");
	return 0;
}
int *search(int (*p)[4],int n)
{
	int *pt;
	pt=*(p+n-1);
	return(pt);
}
