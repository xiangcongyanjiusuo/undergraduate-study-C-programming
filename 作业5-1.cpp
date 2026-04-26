#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a,b,c,t,d;
	b=1;
	c=2;
	for(a=1;a<=20;a++)
	{

		t+=c/b;
		d=c;
		c=b+c;
		b=d;
	}
	printf("%f",t); 
	system("pause");
	return 0;
} 
