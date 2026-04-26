#include<stdio.h>
#include<stdlib.h>
struct Book
{
	char name[10];
	float n;
};
int main()
{
	int i;
	int k;
	float m=0,ave;
	printf("请输入书本数\n");
	scanf("%d",&i);
	struct Book *p;
	p=(struct Book *)malloc(i*sizeof(struct Book));
	for(k=0;k<i;k++)
	{
		scanf("%s %f",(p+k)->name,&(p+k)->n);
	}
	for(k=0;k<i;k++)
	{
		printf("%s %f\n",(p+k)->name,(p+k)->n);
	}
	for(k=0;k<i;k++)
		m=((p+k)->n)+m;
	ave=m/i;
	printf("%f",ave);
	return 0;
}
