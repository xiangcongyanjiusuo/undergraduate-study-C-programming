#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void px(char a[]);
int main()
{
	char a1[100],a2[100];
	printf("现在输入第一个字符串\n");
	gets(a1);
	px(a1);
	printf("排序后的字符串为%s\n",a1);
	printf("现在输入第二个字符串\n");
	gets(a2);
	px(a2);
	printf("排序后的字符串为%s\n",a2);
	strcat(a1,a2);
	printf("现在字符串为%s\n",a1);
	px(a1);
	printf("排序后的字符串为%s",a1);
	system("pause");
	return 0;
}
void px(char a[100])
{
	char m;
	int i,j,t;
	t=strlen(a);
	for(i=0;i<t;i++)
		for(j=i+1;j<t-1;j++)
		{
			if(a[i]>a[j])
			{
				m=a[i];
				a[i]=a[j];
				a[j]=m;
			}
		}	
			
}
