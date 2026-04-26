#include<stdio.h>
#include<stdlib.h>
void jh(char *,char *);
int main()
{
	char a[]="I am a student",
		 b[]="You are a student";
	char *m,*n;
	m=a;n=b;
	jh(m,n);
	printf("%s\n",m);
	printf("%s",n); 
	system("pause");
	return 0;
}
void jh(char *m,char *n)
{
	int i;
	for(i=0;*(m+i)!='\0';i++)
		*(n+i)=*(m+i);
	*(n+i)='\0';
}
