#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	a=0;
	while(a!=-100)
	{
		printf("Çë²Â²âaµÄÊý×Ö\n"); 
		scanf("%d",&a);
		if(a==168)
		{	printf("yes");
			break;
		}
		else
			printf("no");
	}
	system("pause");
	return 0;
}
