# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>
typedef struct Node{
	int date;
	struct Node * pNext;
}NODE,*PNODE;

PNODE create_list(void);
void treaver_list(PNODE );
void sort_list(PNODE );
bool is_empty(PNODE );
int length_list(PNODE );
bool insert_list(PNODE ,int,int);
bool delete_list(PNODE ,int, int *);
void sort_list(PNODE);


int main ()
{
	PNODE pHead=NULL;
	pHead=create_list();
	treaver_list(pHead);
	if(!is_empty(pHead))
	printf("链表为空!\n");
	else
	printf("链表不为空!\n"); 
	
    printf("有%d个长度\n",length_list(pHead));
    sort_list(pHead);
    treaver_list(pHead);
    insert_list(pHead,5,7);
	return 0;
 } 
 
 
 PNODE create_list(void)
 {
 	int i,len,val; 
 	printf("请输入您需要节点的个数：");
 	scanf("%d",&len);
 	PNODE pHead=(PNODE)malloc(sizeof(NODE));
 	if(pHead==NULL)
	 {
	 	printf("内存分配失败，程序终止");
	 	exit(-1); 
	  } 
	  PNODE pTail=pHead;
	  pTail->pNext=NULL;
	for(i=0;i<len;i++)
	{
	  	printf("请输入第%d个节点的值：",i+1);
	  	scanf("%d",&val);
	  	PNODE pNew = (PNODE)malloc(sizeof(NODE));
	  	if(pNew==NULL)
	  	{
	  		printf("内存分配失败，程序终止");
	 	exit(-1); 
		}
		pHead->pNext=pNew;
		pNew->date=val;
		pTail->pNext=pNew;
		pNew->pNext=NULL;
		pTail=pNew;
    } 
    return pHead;
}
void treaver_list(PNODE pHead)
{
	PNODE p=pHead->pNext;
	while(p!=NULL)
	{
		printf("%d\n",p->date);
		p=p->pNext;
	}
}
void sort_list(PNODE pHead)
{
	int i,j,t;
	int len=length_list(pHead);
	PNODE p,q;
	for(p=pHead->pNext,i=0;i<len-1;++i,p=p->pNext)
	{
		for(q=p->pNext,j=i+1;j<len;j++,q=q->pNext)
		{
			if(p->date > q->date)
			{
				t=p->date;
				p->date=q->date;
				q->date=t; 
			}
		}
	}
	
	
}
bool is_empty(PNODE pHead)
{
	if(pHead->pNext!=NULL)
		return true;
	return false;
}
int length_list(PNODE pHead)
{
	int len=0;
	PNODE p=pHead->pNext;
	while(p!=NULL)
	{
		len++;
	  p=p->pNext;
	}
	return len;
}
bool insert_list(PNODE pHead,int n,int val)
{
	do{PNODE p=pHead->pNext;}
    while(p!=NULL);
		
}
