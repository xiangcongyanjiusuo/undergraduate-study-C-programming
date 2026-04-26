#include <stdio.h>

void strcopy(char *dest, char *src)
{
	char *in,*out;
	in=dest,out=src;
	int i;
	for(;*(out+i)!='\0';i++)
		*(in+i)=*(out+i);
	*(in+i)='\0'; 
}

int main() {
	char buf[64];
	char *s = "ABCDEFGH";

	strcopy(buf, s);
	printf("%s\n", buf);
	
	return 0;
}
