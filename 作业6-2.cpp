#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,a[10];
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	while(i>=0)
	{
		printf("%3d",a[--i]);
		if(!(i%5))printf("\n");
	}
	return 0;
}
