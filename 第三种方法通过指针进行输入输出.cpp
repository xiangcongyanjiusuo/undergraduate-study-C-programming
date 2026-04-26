#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,a[10];
	p=a;
	printf("ÇëÊäÈë10¸öÊı\n");
	for(i=0;i<10;i++)
		scanf("%d",p++);
	p=a; 
	for(i=0;i<10;i++,p++)
		printf("%d",*p);
	printf("\n");
	return 0;
} 
