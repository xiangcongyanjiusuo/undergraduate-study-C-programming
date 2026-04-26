#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *p[]={"Good","Sorry","English","China","LiHua"};
	char **a;
	int i;
	for(i=0;i<=4;i++)
	{
		a=p+i;
		printf("%s  ",*a);
	}
	system("pause");
	return 0;
}
