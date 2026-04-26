#include<stdio.h>
#include<stdlib.h>
void printfsu(int);
int main()
{
	int n;
	printf("请输入一个数，下面打印2到它之间所有素数\n");
	scanf("%d",&n);
	printfsu(n);
	system("pause");
	return 0;
}
void printfsu(int n)
{
	int i,j,m;
	for(i=2;i<=n;i++)
	{	
		m=1;
		for(j=2;j<i;j++)
		{	if(i%j==0)	m=0;	}
		if(m==1)	printf("%d",i);
	}
}

