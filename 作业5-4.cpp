#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,t,m;
	m=0; 
	t=1;
	for(a=1;a<=4;a++)
	{
		for(b=1;b<=a;b++)
		{
			t*=b;
		}
		m+=t;
	}
	printf("%d",m);
	system("pause");
	return 0;
}
