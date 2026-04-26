#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[]="EFGH",b[]="efgh",str[50]="xyz";
	strcpy(str,strcat(a,b));
	printf("%s",str);
	return 0;
}
