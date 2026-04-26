#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[4][4],j,i,t=0;
	for(j=0;j<=3;j++)
		for(i=0;i<=3;i++)
			scanf("%d",&a[j][i]);
	for(j=0;j<=3;j++)
		for(i=0;i<=3;i++)
			if(i!=j&&i+j!=3&&i!=3&&j!=3)
				t+=a[j][i];
	printf("%d",t);
} 

