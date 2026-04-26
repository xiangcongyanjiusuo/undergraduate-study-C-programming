#include<stdio.h>
#include<stdlib.h>
void substring(char a[9],int start,int num)
{
	char *p;
	int i;
	p=(char *)malloc((num+1)*sizeof(char));
	for(i=0;i<num;i++)
		*(p+i)=a[start+i];
	printf("%s",p);
} 
int main()
{
	char a[9]={"ABCDEFGH"}; 
	int i,j;
	scanf("%d %d",&i,&j);
	substring(a,i,j);
	return 0;
}
