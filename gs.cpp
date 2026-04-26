#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,t,d;
	for(t=1;t<1000;t++)
	{
		b=0;
		d=0;
		for(a=1;a<t;a++)
		{
			if(t%a==0)
			{
			d=a+d;
			}
		}
		if(d==t)
		{
			printf("%d its factor are ",t);
		for(a=1;a<=t;a++)
		{
			if(t%a==0)
				printf("%d ",a);
		}
		printf("\n");
		}
	}
	system("pause");
	return 0;
}
