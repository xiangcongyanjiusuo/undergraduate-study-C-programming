#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *in,*out;
	char ch,infile[20],outfile[20];
	printf("请输入所读取的文件名：\n");
	scanf("%s",infile);
	getchar();
	if((in=fopen(infile,"r"))==NULL)
	{
		printf("cannot open the infile\n");
		exit(0);
	}
	printf("请输入所写入的文件名：\n");
	scanf("%s",outfile);
	getchar();
	if((out=fopen(outfile,"w"))==NULL)
	{
		printf("cannot open the outfile\n");
		exit(0);
	}
	ch=fgetc(in);
	while(ch!=-1)
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
