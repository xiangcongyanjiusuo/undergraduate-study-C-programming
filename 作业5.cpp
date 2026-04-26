#include<stdio.h>
#include<stdlib.h>
int main() 
{
	int a[2]={0},i,j,k=2;
	for(i=0;i<k;i++)
		for(j=0;j<k;j++)
			a[j]=a[i]+1;
	for(i=0;i<2;i++)
		printf("%d",a[i]);
	return 0;
}
