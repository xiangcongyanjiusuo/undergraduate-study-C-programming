#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	a=2;
	b=0;
	while(a<=100)
	{
		b+=a;
		a+=2;
	 } 
	printf("%d",b);
	system("pause");
	return 0;
}
