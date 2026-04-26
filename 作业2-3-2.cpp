#include <stdio.h>

int strlength(char *s) {
	char *p=s;int i=0;
	do
	{
		i++;
	}while(*++p!='\0');
	return i;
}

int main() {
	char s[] = { "ABCDEFGH" };
	
	printf("%s: %d\n", s, strlength(s));
	return 0;
}
