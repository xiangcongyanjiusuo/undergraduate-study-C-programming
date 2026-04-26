#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,t;
	a=1;
	t=0;
	while(a<=100)
	{
		if(a%2==0)
			t+=a;
			a++;
	}
	printf("%d",t);
	system("pause");
	return 0;
 } 
