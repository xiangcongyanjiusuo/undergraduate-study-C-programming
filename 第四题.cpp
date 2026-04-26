#include<stdio.h>
int B(int m,int a[10])
{
	int first=0,last=9;
	int mid,k=0;
	while(first<=last)
	{
		mid = (last+first)/2;
		if(a[mid]==m)
		{
			k=1;
			break;
		}
		else
		{
		
		if(a[mid]>m)
		{
			last=mid-1;
		}
		else
		{
			first=mid+1;
		}
		}	
	}
	if(k=1)	{return mid;}
	else	return -1;
}
int main()
{
	int a[10]={1,3,4,5,7,9,10,13,15,16};
	int n,m;
	scanf("%d",&m);
	n=B(m,a);
	if(n==-1)
		printf("找不到\n"); 
	else
		printf("输入数据在第%d个位置",n+1);
	return 0;
}
