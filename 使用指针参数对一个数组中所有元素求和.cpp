#include<stdio.h>
#include<stdlib.h>
#define size 10
int sum(int *,int*);
int main()
{
	int a[size]={4,8,9,5,3,45,2,5,4,2},t;
	t=sum(a,a+size);
	printf("数组元素和是%d",t);
	system("pause");
	return 0;
}
int sum(int * start,int * end)
{
	int t=0;
	while(start<end)
	{
		t+=*start;
		start++;
	}
	return t; 
}
