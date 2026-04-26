#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	int a,b;
	a=100;
	while(a>0)
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
		printf("| |\n");
		a--;
		Sleep(50);
	}
	system("pause");
	return 0;
}
