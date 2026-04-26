#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *a="I love China",*p,b[20];
	p=b;
	int i;
	for(i=0;*(a+i)!='\0';i++)
		*(p+i)=*(a+i);
	*(p+i)='\0' ;
	printf("%s\n",a);
	printf("%s",p);
	system("pause");
	return 0;
}
