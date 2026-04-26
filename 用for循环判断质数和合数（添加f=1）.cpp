#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,f,i;
	scanf("%d",&a);
	for(f=2;f<a;f++)
		if(a%f==0)
		{	i=0;
			printf("%d\n",f);
		}
	if(i==0)
		printf("合数");
	else
		printf("质数");
	system("pause");
	return 0; 
}
