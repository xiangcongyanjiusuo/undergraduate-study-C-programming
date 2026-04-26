#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp1,*fp2;char ch;
	if((fp1=fopen("file2.txt","r"))==NULL)
	{
		printf("cannot open the file2.txt\n");
		exit(0);
	}
	ch=fgetc(fp1);
	while(ch!=-1)
	{
		putchar(ch);
		ch=fgetc(fp1);
	}
	printf("\n");
	rewind(fp1);
	if((fp2=fopen("file2","w"))==NULL)
	{
		printf("cannot open the file2\n");
		exit(0);
	}
	ch=fgetc(fp1);
	while(!feof(fp1))
	{
		fputc(ch,fp2);
		ch=fgetc(fp1);
	}
	fclose(fp1);
	fclose(fp2);
	system("pause");
	return 0;
} 
