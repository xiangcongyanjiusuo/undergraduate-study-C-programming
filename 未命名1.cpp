#include<stdio.h>
int fun(int n)
{
	int f(int n),a;
	for(a=1;;a++)
	if(f(a)>n)
		return f(a);
}
int f(int a)
{
	int t;
	if(a==1||a==2)
		t=1;
	else
		t=f(a-1)+f(a-2);
	return t;
}
int main()
{  int  n;
  printf("Input n please:");
  scanf("%d",&n);
  printf("n = %d, f = %d\n",n, fun(n)) ;
}  
