#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x[6],a=0,b,c=18;
	do
	{
		x[a]=c%2;
		a++;
		c=c/2;
	}while(c>=1);
	for(b=a-1;b>=0;b--)
		printf("%d",x[b]);
	printf("\n");
	return 0;	
	
}
