#include<stdio.h>
int strlen(char *p)
{
	char *t;
	int n=0;
	t=p;
	while(*t!='\0')
	{
		n++;
		t++;
	}
	return n;
}
int strcpy(char *p1,char *p2)
{
	int m,i;
	char *a,*b;
	a=p1;b=p2;
	m=strlen(p2);
	for(i=0;i<m;i++)
	{
		(*a++)=(*b++);
	}
	return 1;
}
int strcmp(char *p1,char *p2)
{
	int m,i;
	char *a,*b;
	a=p1;b=p2;
	m=strlen(p2);
	for(i=1;i<=m;i++)
	{
		if(*(a+i)!=*(b+i))
		return i;
	}
	return 0;
}
int main()
{
	char a[20]={"abcdefg"},b[20]={"hijklmn"};
	int t;
	printf("输入0，结束程序\n");
	printf("输入1，对两字符串求长度\n");
	printf("输入2，将b中字符串复制到a中\n");
	printf("输入3，将两字符串比较\n");
	
	for(;;)
	{
		scanf("%d",&t);
		if(t==0)
		{
			break;
		}
		if(t==1)
		{
			int a1,b1;
			a1=strlen(a);	b1=strlen(b);
			printf("a字符串长度为%d，b字符串长度为%d\n",a1,b1);
		}
		if(t==2)
		{
			strcpy(a,b);
			printf("此时a数组为%s\n",a);
		}
		if(t==3)
		{
			int m;
			m=strcmp(a,b);
			printf("字符串在第%d个元素处不同了\n",m);
		}
	}
	return 0;
}
