#include<stdio.h>
#include<string.h> 
void strReverse( char *s )
{
	int i,n,m;
	n=strlen(s);
	char t;
	for(i=n-1,m=0;m<=(n/2);m++,i--)
	{
		t=*(s+m);
		*(s+m)=*(s+i);
		*(s+i)=t;
	}
}
int main()
{
	char s[20];
	gets(s);
	strReverse(s);
	puts(s);
	return 0;
}
