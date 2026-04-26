#include<stdio.h>
int a[5];
int b=0;
void B(int c)
{
	int s=4;
	do
	{
		a[s--]=c%2;
		c/=2;
	}while(c!=0);
} 

int ls(int a[])
{
	if(a[4]==1&&a[3]==0)return 0;
	else if(a[3]==1&&a[2]==1)return 0;
	else if(a[3]==0&&a[2]==0)return 0;
	else if(a[2]==1&&a[1]==0)return 0;
	else if(a[2]==0&&a[1]==1)return 0;
	else if(a[1]==0&&a[0]==0)return 0;
	else if(a[0]==1&&a[4]==0)return 0;
	else if(a[0]==1&&a[1]==0)return 0;
	else return 1;
}
int main()
{

	for(int i=0;i<=31;i++)
    {
		B(i);
    	if(ls(a)==1)
		for(int i=4;i>=0;i--)
		{
			if(a[i]==1)
			printf("%c ",65+4-i);
		} 
	} 
	return 0;
}
