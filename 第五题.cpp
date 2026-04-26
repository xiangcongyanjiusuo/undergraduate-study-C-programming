#include<stdio.h>
int ceng(int n)
{
	if(n==1)
		return 1;
	if(n==0)
		return 0;
	else
		return ceng(n-1)+n;
}	
int sum(int n)
{
	if(n==1)
		return 1;
	if(n==0)
		return 0;
	else
		return sum(n-1)+ceng(n);
} 
int main()
{
	int n=100;
	printf("¹²ÓĞ%d¸öÃºÇò\n",sum(n));
	return 0;
}
