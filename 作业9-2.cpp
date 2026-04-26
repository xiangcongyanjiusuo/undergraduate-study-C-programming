#include<stdio.h>
#include<stdlib.h>
void cr(char *,char);
int main()
{
	char a[10]="aabbcdef";
	char m;	int i;
	scanf("%c",&m);
	cr(a,m);
	puts(a);
	system("pause");
	return 0;
}
void cr(char *a,char m)
{
	a[8]=m;
	int i,j;	char d;
	for(i=0;i<9;i++)
		for(j=i+1;j<=9;j++)
			if(a[i]>a[j]&&a[i]!='\0'&&a[j]!='\0')
				{d=a[i];	a[i]=a[j];	a[j]=d;		}
			a[9]='\0';
}
