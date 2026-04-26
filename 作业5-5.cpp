#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,t,b;
	a=0;
	for(t=1;t<=1000;t++)
	{
		for(b=1;b<=t;b++)
		{
			if(t%b==0) 
				a=b+a;
		}
			if(a==t)
			printf("%d",t);
	}
	system("pause");
	return 0;
}
