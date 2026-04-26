#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
struct Student
{
	char name[10];
	int num;
	int age;
	char adds[15];
}stud[SIZE];
int main()
{
	int i;
	FILE *fp;
	if((fp=fopen("E:\\file2","rb"))==NULL)
	{
		printf("cannot open the file\n");
		exit(0);
	}
	
	for(i=0;i<SIZE;i+=2)
	{
		fseek(fp,i*sizeof(struct Student),0);
		fread(&stud[i],sizeof(struct Student),1,fp);
		printf("%10s%4d%4d%-15s\n",stud[i].name,stud[i].num,stud[i].age,stud[i].adds);
	}
	fclose(fp);
	return 0;
}
