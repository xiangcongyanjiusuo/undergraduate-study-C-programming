#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[50];
	int i,j,t,m=0;
	printf("请输入一个字符串，下面判断它是否为回文\n"); 
	gets(a);
	t=strlen(a);
	for(i=0,j=t-1;i<t,j>=0;i++,j--)
	{
			if(*(a+i)!=*(a+j))
			{
				m=0;
			} 
	} 
	if(m==0)
		printf("no");
	else
		printf("yes");
	system("pause");
	return 0;
}
