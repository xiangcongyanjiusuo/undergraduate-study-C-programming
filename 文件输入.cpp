#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch,filename[10];
	printf("请输入所用的文件名:\n");
	scanf("%s",filename);
	getchar();
	if((fp=fopen(filename,"w"))==NULL)
	{
		printf("cannot open file\n");
		exit(0);
	}
	char a[10]="1126",
	b[10]="5895",
	c[10]="1612",
	d[10]="1596",
	e[10]="5653";
	
	fprintf(fp,"%s %s %s %s %s",a,b,c,d,e);
	fclose(fp);
	putchar(10);
	return 0;
}
