#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	scanf("%d",&a);
	switch(a/250)
	{
		case (0):printf("%d",a);break;
		case (1):printf("%d",0.95*a);break;
		
	}
	system("pause");
	return 0;
}
