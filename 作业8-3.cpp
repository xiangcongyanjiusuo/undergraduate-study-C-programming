#include<stdio.h>
int fun(int t)
{
	int a[10000]={1,1},i;
	for(i=2;i<10000;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	for(i=0;i<10000;i++)
	{
		if(a[i]>t)
			return a[i];
	}
}
int main()
{  int  n;
  printf("Input n please:");
  scanf("%d",&n);
  printf("n = %d, f = %d\n",n, fun(n)) ;
}  
