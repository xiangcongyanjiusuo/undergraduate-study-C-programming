#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,t,m;
	m=0; 
	for(a=1;a<=20;a++)
	{
		t=1; 
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
