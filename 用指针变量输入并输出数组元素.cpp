#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10],i,*p;
	printf("ÇëÊäÈë10¸öÊı\n");
	for(p=a;p<(a+10);p++)
		scanf("%d",p);
	for(p=a;p<(a+10);p++)
		printf("%d",*p);
	printf("\n");
	system("pause");
	return 0;
} 
