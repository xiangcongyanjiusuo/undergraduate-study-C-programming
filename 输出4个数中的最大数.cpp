#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,d,e;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b)
		e=a;
	else
		e=b;
	if(e<c)
		e=c;
	if(e<d)
		e=d;
	printf("%d",e);
	system("pause");
	return 0;
 } 
