#include<stdio.h>
int main()

{
	int x=7,y=4,z;
	z=(x+=y%=x+y);
	printf("%d",z); 
	return 0;
}
