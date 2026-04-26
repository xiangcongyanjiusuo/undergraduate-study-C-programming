#include<stdio.h>
#include<stdlib.h>
struct Student
{
	int num;
	char name[20];
	int score1;
	int score2;
	int score3;
}; 
void ave(struct Student b[10])
{
	int i,k,m;
	int f[10];
	for(i=0;i<10;i++)
	{
		f[i]=((b[i].score1+b[i].score2+b[i].score3)/3);	//将平均值赋给f数组 
		printf("%d  ",f[i]);
	}
	k=0;
	m=f[0];
	for(i=0;i<10;i++)
	{
		if(f[i]<f[i+1])	{k=i+1;	m=f[i+1];}	
		else	{k=i;	m=f[i];}	
	}
	printf("平均成绩最高的学生:\n");
	printf("%d  %s  %d  %d  %d  %d",b[k].num,b[k].name,b[k].score1,b[k].score2,b[k].score3,m);
}


int main()
{
	int i;
	struct Student a[10];
	
	for(i=0;i<10;i++)		//为结构体赋初值 
		scanf("%d %s %d %d %d",&a[i].num,a[i].name,&a[i].score1,&a[i].score2,&a[i].score3);
		
	printf("平均值为:\n");	
	ave(a);			   //完成要求规定 
	
	
	return 0;
}
