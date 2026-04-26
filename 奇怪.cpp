#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	int a,b;
	a=5;
	while(a>0);
	{
		system("cls");
		b=0;
		while(b<a)
		{
			printf(" ");
			b++;
		}
		printf(" O\n");
		b=0;
		while(b<a)
		{
			printf(" ");
			b++;
		}
		printf("<H>\n");
		b=0;
		while(b<a)
		{
			printf(" ");
			b++;
		}
		printf("| |");
		Sleep(1000);
		a--;
	}
	system("pause");
	return 0;
}
