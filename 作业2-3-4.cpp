#include<stdio.h>
void strconcat(char *dest, char *src)
{
	char *in,*out;
	in=dest;	out=src;
	int i;
	for(i=0;*(in+i)!='\0';i++)
		in=in+i;
	for(i=0;*(out+i)!='\0';i++)
		*(in+i)=*(out+i);
	*(in+i)='\0'; 
}

int main() {
	char buf[64] = { "ABCD" };
	char *s = "EFGH";

	strconcat(buf, s);
	printf("%s\n", buf);
	
	return 0;
}
