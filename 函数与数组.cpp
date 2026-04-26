#include<stdio.h>
#include<stdlib.h>
#define mon 12
int main()
{
	int days[mon]={31,28,31,30,31,30,31,31,30,31,30,31};
	int a;
	for(a=0;a<mon;a++)
		printf("mon %2d has %d days\n",a+1,*(days+a));
	system("pause");	
	return 0;
}
