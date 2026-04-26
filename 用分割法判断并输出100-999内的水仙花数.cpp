#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,a,b,c;
	for(x=100;x<=999;x++)
	{
		a=x/100;
		b=x/10%10;
		c=x%10;
		if(a*a*a+b*b*b+c*c*c==x)
			printf("%d\n",x);
	}
	system("pause");
	return 0;
}

