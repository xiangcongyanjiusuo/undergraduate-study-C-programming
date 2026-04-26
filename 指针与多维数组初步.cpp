#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int (*p)[4];
	p=a;
	printf("%d",*(*(p+2)+1));
	system("pause");
	return 0;
}
