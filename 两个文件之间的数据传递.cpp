#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *in,*out;
	char ch;
	if((in=fopen("file2.txt","r"))==NULL)
	{
		printf("cannot open the file1\n");
		exit(0);
	}
	if((out=fopen("file2","w"))==NULL)
	{
		printf("cannot open the file2\n");
		exit(0);
	}
	ch=fgetc(in);
	while(!feof(in))
	{
		fputc(ch,out);
		putchar(ch);
		ch=fgetc(in);
	}
	putchar(10);
	fclose(in);
	fclose(out);
	system("pause");
	return 0;
}
