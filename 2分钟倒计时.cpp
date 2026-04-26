#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	int a,b;
	a=2;
	b=0;
	while(a>=0)
	{	
		system("cls");
		printf("%02d:%02d",a,b);
		Sleep(1000);
		if(b==0)
		{
			a--;
			b=60;
		}
		b--;
	}
	system("pause");
	return 0;
}
