#include<stdio.h>
#include<stdlib.h>

int* fileCopy(char *dest,char *src)
{
	FILE *fp1,*fp2;
	int k;
	if((fp1=fopen(src,"r"))==NULL)
	{
		printf("打开文件1错误\n");
		exit(0); 
	}
	if((fp2=fopen(dest,"w"))==NULL)
	{
		printf("打开文件2错误\n");
		exit(0);
	}
	char ch;
	ch=fgetc(fp1);
	while(ch!=-1)
	{
		fputc(ch,fp2);
		ch=fgetc(fp1);
	}
	if(ch==-1)
	{
		k=1;
		return &k;
	}
	else
	{
		k=0;
		return &k;
	}
}
int main()
{
	int *i;
	char src[20],dest[20];
	printf("请输入源文件名\n");
	scanf("%s",src);
	printf("请输入目标文件名\n");
	scanf("%s",dest);
	getchar();
	i=fileCopy(dest,src);
	if((*i)==1)
		printf("复制成功\n");
	else
		printf("复制失败\n");
	return 0;

}
