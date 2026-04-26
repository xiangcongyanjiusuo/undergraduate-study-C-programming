#include <stdio.h>
#include <string.h>
#define    N    32

int digitNum(char *s) 
{
	int i,k=0;
	for(i=0;i<N;i++)
		if(s[i]>='0'&&s[i]<='9')
			k++;
	return k; 
}
int main() {
	char s[N];
	int n;

	gets(s);
	n = digitNum(s);
	printf("num: %d\n", n);

	return 0;
}
