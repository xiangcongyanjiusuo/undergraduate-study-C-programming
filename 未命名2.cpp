#include<stdio.h>
#include<stdlib.h>
#define size 10
int sum(int *,int);
int main()
{
	int a[size]={20,10,5,6,9,7,8,11,4,3},t;
	t=sum(a,size);
	printf("数组中所有元素之和为%d\n",t);
	system("pause");
	return 0;
}
int sum(int * b,int n)
{
	int m,t=0;
	for(m=0;m<n;m++)
		t+=*b++;
	printf("a的字节长度为%zd\n",sizeof b);
	return t;
}
