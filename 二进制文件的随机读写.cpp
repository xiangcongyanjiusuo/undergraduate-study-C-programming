#include<stdio.h>
#include<stdlib.h>
struct Student
{
	char name[10];
	int num;
	int age;
	char adds[15];
}stud[10];
int main()
{
	FILE *fp;
	int i; 
	if((fp=fopen("file2","rb"))==NULL)
	{
		printf("cannot open the file2\n");
		exit(0);
	}
	for(i=0;i<10;i+=2)
	{
		fseek(fp,i*sizeof(struct Student),0);
		fread(&stud[i],sizeof(struct Student),1,fp);
		printf("%s %d %d %s\n",stud[i].name,stud[i].num,stud[i].age,stud[i].adds);
	}
	fclose(fp);
	return 0;
}
