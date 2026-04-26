#include<stdio.h>
int change(int a)
{
	return a*(a+1)/2;
}
int main()
{
	int n=236;
	int dp[110];
	for(int i=1;i<=100;i++)
	{dp[i]=change(i);}
	for(int i=1;i<100;i++)
	{
		for(int j=i+1;j<=100;j++)
		{
			if(dp[j]-dp[i]==n)
			{
				printf("%d %d\n",i,j);
				break;
			}
		}
	}
	return 0;
}
