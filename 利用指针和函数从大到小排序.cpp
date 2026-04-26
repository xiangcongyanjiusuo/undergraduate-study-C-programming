#include<stdio.h>
#include<stdlib.h>
void sort(int *,int);
int main()
{
	int i,a[10]={1,2,3,4,5,6,7,8,9,10},*p;
/*	printf("请输入10个数，下面将它们从大到小排序\n");
	for(p=a;p<(a+10);p++)
		scanf("%d",p);*/
	p=a;
	sort(p,10);
	printf("排序后");
	for(p=a;p<(a+10);p++)
		printf("%d ",*p);
	system("pause");
	return 0;
}
void sort(int *a,int n)
{
/*	int *i,*t,*j,m;
	t=a+n;
	for(i=a;i<t-1;i++)
		for(j=a+1;j<t;j++)
		{	if((*i)<(*j))
			{m=*i;	*i=*j;	*j=m;}
		}
*/
	int i,j,t;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(*(a+i)<*(a+j))
			{t=*(a+i);*(a+i)=*(a+j);*(a+j)=t;} 
}

