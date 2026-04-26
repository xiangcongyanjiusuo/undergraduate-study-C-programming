#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
struct Student
{
	char name[10];
	int num;
	int age;
	char addr[15];
}stud[SIZE];
void save()
{
	FILE *fp;
	int i;
	if((fp=fopen("file2","wb"))==NULL)
	{
		printf("cannot open the file\n");
		exit(0);
	}
	for(i=0;i<SIZE;i++)
		if(fwrite(&stud[i],sizeof(struct Student),1,fp)!=1)
			printf("file open was error\n");
	fclose(fp);
}
int main()
{
	int i;
	for(i=0;i<SIZE;i++)
	{	
		printf("请输入学生的信息：\n");
		scanf("%s %d%d %s",stud[i].name,&stud[i].num,&stud[i].age,stud[i].addr);
	}
	save();
	system("pause");
	return 0;
}
