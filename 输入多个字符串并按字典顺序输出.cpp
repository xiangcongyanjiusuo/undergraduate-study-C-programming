#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[5][11],t[11];
	int len,x,y,i;
	for(i=0;i<=4;i++)
		gets(a[i]);
	for(x=0;x<4;x++)
	{
		for(y=x+1;y<=4;y++)
		{
			if(strcmp(a[x],a[y])>0)
			{
				strcpy(t,a[x]);
				strcpy(a[x],a[y]);
				strcpy(a[y],t);
			}
		}
	}
	for(i=0;i<=4;i++)
		puts(a[i]);
	system("pause");
	return 0;
} 
