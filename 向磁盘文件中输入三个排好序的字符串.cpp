#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp;
	char str[3][10],temp[10];
	int i,j,k,n=3;
	printf("请输入三个字符串\n");
	for(i=0;i<n;i++)
		gets(str[i]);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
	if((fp=fopen("file2.txt","w"))==NULL)
	{
		printf("无法打开此文件：\n");
		exit(0);
	}
	printf("\nThe new sequence\n");
	for(i=0;i<n;i++)
	{
		fputs(str[i],fp);	fputs("\n",fp);
		puts(str[i]);	putchar(10);
	}
	system("pause");
	return 0;
}
