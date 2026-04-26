#include<stdio.h>
#include<stdlib.h>
#define maxn 10



struct LNode{
	double num[maxn];
	int Last;
};
typedef struct LNode * List;
struct LNode L;

void MakeEmpty(LNode* P)
{

	P=(List)malloc(sizeof(struct LNode));
//	P->Last=-1;
}

int MAXN(List P)
{
	int mex=0;
	int i=0; 
	while(i<=P->Last)
	{
        if(P->num[i]>mex)
		mex=P->num[i];
		i++;
	}
	return mex;
}
void insert(int m,int i,List P)		//m数据，i几号位置/几号数据，p整个表 
{
	 for(int j=P->Last;j>=i-1;j--)
	 {
	 	P->num[j+1]=P->num[j];		//头插 
	 }
	 P->num[i-1]=m;					
	 P->Last++;
	 return ;
}
int main()
{
	LNode* P;
	
	MakeEmpty(P); 
	for(int i=0;i<maxn;i++)
	{
		P->num[i]=0;
	}
	int s,n,mexn;
	scanf("%d",&s);					//定义几个数据 
	for(int i=1;i<=s;i++)	
	{
		scanf("%d",&n);
		insert(n,i,P);				//P是头节点 
	}
	mexn=MAXN(P);
/*	for(int i=0;i<maxn;i++)
	{
		printf("%d",P->num[i]);
	}*/
/*	printf("%d",mexn);*/
/*	printf("%d",P->Last ); */
	return 0;
 }
