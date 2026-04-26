#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a,b,c,p,area;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b<=c||b+c<=a||a+c<=b)
		printf("error");
	else
	{	p=(a+b+c)/2;
		area=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("%d",area);
    }
	system("pause");
	return 0;
}
