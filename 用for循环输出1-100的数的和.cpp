#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,t;
	a=1;
	t=0;
	for(a=1;a<=100;a++)
		t+=a;
	printf("%d",t);
	system("pause");
	return 0;
}
