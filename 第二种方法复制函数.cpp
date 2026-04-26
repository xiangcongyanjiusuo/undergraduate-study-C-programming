#include<stdio.h>
#include<stdlib.h>
void fz(char *,char *);
int main()
{
	char a[]="I am a student",
		 b[]="You are a student";
	printf("a=%s\nb=%s\n",a,b);
	char *m,*n;
	m=a;	n=b;
	fz(m,n);
	printf("now\na=%s\nb=%s",a,b);
	system("pause");
	return 0;
}
void fz(char * q,char * h)
{
	while((*q=*h)!='\0')
		{q++;	h++;}
}
