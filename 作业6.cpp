#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0,j=7,a[8]={6,2,11,4,5,9,7,8},k; 
	while(i<j)
	{
		k=a[i];a[i]=a[j];a[j]=k;i++;j--;
	}
	for(i=0;i<8;i++)
		printf("%3d",a[i]);
	return 0;
}
