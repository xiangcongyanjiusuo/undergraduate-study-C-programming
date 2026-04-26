#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	a=9;
	for(a=9;a>=1;a--)
	{
		b=1;
		for(b=1;b<a;b++)
			printf("   %d*%d=%2d",b,a,b*a);
			printf("   %d*%d=%2d\n",b,a,a*b);
	}
	system("pause");
	return 0;
}
