#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10];
	int *p,i;
	printf("ÇëÊäÈë10¸öÊı\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(p=a;p<(a+10);p++)
		printf("%d",*p);
	printf("\n");
	system("pause");
	return 0;
}
