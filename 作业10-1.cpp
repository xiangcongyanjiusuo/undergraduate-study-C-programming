#include<stdio.h>
#include<stdlib.h>
void huan(char (*)[4]);
int main()
{
	char a[3][4]={"abc",
				  "def",
				  "ghi",
				  };
	huan(a);
	int i,j;
	system("pause");
	return 0;
}
void huan(char a[3][4])
{
	int i,j;	char b[3][4];
	for(i=0;i<=2;i++)
		for(j=0;j<=2;j++)
			{b[i][j]=a[j][i];}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
			printf("%c ",b[i][j]);
		printf("\n");
	}
} 
