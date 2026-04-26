#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,d;
	a=1;
	c=4;
	d=1;
	for(a=1;a<=9;a++)
	{
		if(a%2==0)
			printf(" \n");
		else
		{
			b=1;
			for(b=1;b<=c;b++)
			{
				printf(" ");
			}
			c--;
			for(b=1;b<=d;b++)
			{
				printf("*");
			}
			d+=2;
		}
	}
	c=1;
	d=7;
		for(a=10;a<=18;a++)
	{
		if(a%2==0)
			printf(" \n");
		else
		{
			b=1;
			for(b=1;b<=c;b++)
			{
				printf(" ");
			}
			c++;
			for(b=1;b<=d;b++)
			{
				printf("*");
			}
			d-=2;
		}
	}
	system("pause");
	return 0;
} 
