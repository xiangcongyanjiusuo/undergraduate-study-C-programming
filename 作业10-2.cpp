#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fx(char *);
int main()
{
	char a[10];
	printf("请输入一串字符，下面将它反序输出\n");
	gets(a);
	fx(a);
	system("pause");
	return 0;
}
void fx(char *a)
{
	int i,j,t;
	char m;
	t=strlen(a);
	for(i=0,j=t-1;i<t/2;i++,j--)
		{m=a[i];	a[i]=a[j];	a[j]=m;	}
	puts(a);
}
