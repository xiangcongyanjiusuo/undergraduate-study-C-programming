#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	int a,b;
	a=0;
	while(a>=0)
	{
		b=0;
		while(b<=a)
		{
			printf(" ");
			b++;
		}
		printf("H");
		a++;
	}
	system("pause");
	return 0;
}
