#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	b=0;
	for(a=2;a<=100;a+=2)
		b+=a;
	printf("%d",b);
	system("pause");
	return 0;
}
