#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	char c[101],d[101];
	scanf("%s",c);
	scanf("%d",&a);
	scanf("%s",d);
	scanf("%d",&b);
	printf("%s %d\n%s %d\n",c,a,d,b);
	if(a>b)
		printf("%s",c);
	else
	{
		if(a<b)
			printf("%s",d);
		else
			printf("%s与%s成绩相同",c,d);
	}
	system("pause");
	return 0;
} 
