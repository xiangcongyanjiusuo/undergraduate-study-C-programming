#include<stdio.h>
#include<stdlib.h>
int main()
{
	char * s="I LOVE CHINA",*p;
	for(p=s+11;s<=p;s++)
		printf("%c",*s); 
	system("pause");
	return 0;
}
