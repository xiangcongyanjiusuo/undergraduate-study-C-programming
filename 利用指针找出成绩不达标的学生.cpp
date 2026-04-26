#include<stdio.h>
#include<stdlib.h>
int *search(int(*)[4]);
int main()
{
	int a[3][4]={{60,70,80,90},{59,46,97,85},{95,42,62,45}};
	int *p;
	int i,j;
	for(i=0;i<=2;i++)
	{
		p=search(a+i);
		if(p==*(a+i))
		{
			printf("第%d名学生不及格:",i+1);
			for(j=0;j<=3;j++)
				printf("%d  ",*(p+j));
			printf("\n");
		} 
	}
}
int *search(int (*p)[4])
{
	int *pt,i;
	pt=NULL;
	for(i=0;i<=3;i++)
		if((*(*p+i))<60)	pt=*p;
	return(pt);
}
