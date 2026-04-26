#include<stdio.h>
#include<stdlib.h>
int main()
{
	char * s="I love china",b[20];
	int i;
	for(i=0;*(s+i)!='\0';i++)
		*(b+i)=*(s+i);
	*(b+i)='\0';
	printf("s现在是%s\n",s);
//	printf("b现在是%s",b);
	for(i=0;b[i]!='\0';i++)
		printf("%c",b[i]);
	system("pause");
	return 0;
}
