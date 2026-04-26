#include<stdio.h>
#include<stdlib.h>
struct Student
{
	char name[10];
	int num;
	int score0;
	int score1;
	int score2;
	int ave;
}a[3];
int main()
{
	int i,k;
	for(i=0;i<3;i++)
	{
		printf("请输入该个学生的姓名、学号、三门课的成绩\n");
		scanf("%s %d %d %d %d",a[i].name,&a[i].num,&a[i].score0,&a[i].score1,&a[i].score2);
		a[i].ave=(a[i].score0+a[i].score1+a[i].score2)/3;
	}
	printf("下面将学生信息及平均成绩输入磁盘中\n");
	FILE *fp;
	if((fp=fopen("E:\\file2","rb+"))==NULL)
	{
		printf("cannot open the file\n");
		exit(0);
	}
	for(i=0;i<3;i++)
		if(fwrite(&a[i],sizeof(struct Student),1,fp)!=1)
		{
			printf("cannot inter the file\n");
			exit(0);
		}
	struct Student b[3];
	for(i=0;i<3;i++)
		if(fread(&b[i],sizeof(struct Student),1,fp)!=1)
		{
			printf("cannot print the file\n");
			exit(0);
		}
	for(i=0;i<3;i++)
	{
		printf("%s %d %d %d %d %d\n",a[i].name,a[i].num,a[i].score0,a[i].score1,a[i].score2,a[i].ave);
	}
	return 0;
}
