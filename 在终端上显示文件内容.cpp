#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
int main()
{
	FILE *fp;
	char str[3][10];
	int i;
	if((fp=fopen("E:\\file2.txt","r"))==NULL)
	{
		printf("cannot open the file\n");
		exit(0);
	}
	for(i=0;i<=2;i++)
	{
		strcpy(str[i],fgets(fp));
		puts(i);
		putchar(10);
	}
	fclose(fp);
	system("pause");
	return 0;
}
