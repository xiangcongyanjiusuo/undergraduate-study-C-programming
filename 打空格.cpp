#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	a=5;
	while(a>=1)
	{
		b=1;
		while(b<a)
		{
			printf(" ");
			b++;
		}
		printf("1\n"); 
		a--;
	}
	system("pause");
	return 0;
}
