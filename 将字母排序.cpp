#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[101],t;
	int len,i,j; 
	gets(a);
	len=strlen(a);
	for(j=0;j<=len-2;j++)
	{
		for(i=j+1;i<=len-1;i++)
		{
			if(a[j]>a[i])
				{
					t=a[j];
					a[j]=a[i];
					a[i]=t;
				}
		}
	}
	puts(a);
	system("pause");
	return 0;
} 
