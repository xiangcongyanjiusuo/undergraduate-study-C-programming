#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int *b[5]={&a[0],&a[1],&a[2],&a[3],&a[4]};
	int **p,i;
	p=b;
	for(i=0;i<=4;i++)
		printf("%d  ",**p++);
	system("pause");
	return 0;
}
