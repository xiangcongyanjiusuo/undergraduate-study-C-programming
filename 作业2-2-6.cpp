#include<stdio.h>
#include<stdlib.h>
void u_sum(int (*p)[3]);
int main()
{
	int a[5][3],i,j;
	for(i=0;i<5;i++)
		for(j=0;j<3;j++)
		{
			printf("请为数组元素赋值\n"); 
			scanf("%d",&a[i][j]);
		}
	u_sum(a);
	system("pause");
	return 0;
}
void u_sum(int (*p)[3])
{
	int i,j,sum;
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
			sum+=*(*(p+i)+j);
		}
		printf("第%d行的和为%d\n",i+1,sum);
		sum=0;
	}
}

