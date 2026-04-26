#include<stdio.h>
#include<stdlib.h>
float max(float *p1,int i)
{
	float m;
	int n;
	for(n=0;n<i;n++)
	{
		if(*(p1+n)<=*(p1+n+1))	m=*(p1+n+1);
		else	m=*(p1+n);
	}
	return m;
}
int main()
{
	int i,n;
	float *p1;
	printf("请输入学生人数\n"); 
	scanf("%d",&i);
	p1=(float *)malloc(i*sizeof(float));
	for(n=0;n<i;n++)
		scanf("%f",p1+n);
	printf("%f",max(p1,i)) ;
	return 0;
}
