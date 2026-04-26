#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,t,b,c;
	for(t=1;t<=1000;t++)
	{
		for(b=1;b<=t/2;b++)
		{
			if(t%b==0) 
			{
				c+=t;
				if(c==t)
				{
					printf("%d its factor are ",t);
					printf("\n");
					break;
				}
			}		
		}
	}
	system("pause");
	return 0;
}
