#include<stdio.h>
#include<stdlib.h>
int main()
{
	int u[5]={100,200,300,400,500};
	int *p1,*p2,*p3;
	p1=u;
	p2=&u[2];
	printf("p=%p,*p=%d,&p=%p\n",p1,*p1,&p1);
	//指针加法
	p3=p1+4;
	printf("指针加法\n");
	printf("p1+4=%p,*(p1+4)=%d,&p3=%p\n",p1+4,*(p1+4),&p3);
	//递增指针 
	p1++;
	printf("递增指针\n");
	printf("p1=%p,*p1=%d,&p1=%p\n",p1,*p1,&p1);
	//递减指针 
	p2--;
	printf("递减指针\n");
	printf("p2=%p,*p2=%d,&p2=%p\n",p2,*p2,&p2);
	--p1;//恢复初始值 
	++p2;//恢复初始值
	//求差值
	printf("求差值\n");
	printf("p1=%p,p2=%p\n,p2-p1=%d",p1,p2,p2-p1);
	//指针减去整数
	printf("指针减去整数");
	p3=p2-1;
	printf("p3=%p,*p3=%d,&p3=%p",p3,*p3,&p3);
	system("pause");
	return 0;
}
