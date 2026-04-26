#include<stdio.h>
#include<stdlib.h>
#define n1 10
void printf1(const double *,int);
void mult(double *,int);
int main()
{
	double a[n1]={1,2,3,4,5,6,7,8,9,10};
	printf("begin");
	printf1(a,n1);
	mult(a,n1);
	printf("\n");
	printf("now");
	printf1(a,n1);
	system("pause");
	return 0;
}
void printf1(const double *a,int n)
{
	int i;
	for(i=0;i<10;i++)
		printf("%f ",0.83*(*a++));
}
void mult(double *a,int n)
{
	double *e;
	e=a+n;
	for(;a<e;a++)
		(*a)*=n;
}
