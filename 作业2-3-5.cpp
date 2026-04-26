#include <stdio.h>

int strcompare(char *s1, char *s2)
{
	int i,k=0;
	for(i=0;*(s1+i)!='\0'||*(s2+i)!='\0';)
	{
		if(*(s1+i)>*(s2+i))	{k=1;}
		if(*(s1+i)<*(s2+i))	{k=1;}
		if(*(s1+i)==*(s2+i))	i++;
	}
	if(k==0)	return(0);
	if(k==1)
		return(*s1-*s2); 		
}

int main() {
	char *s1 = "ABCD";
	char *s2 = "ABC";

	printf("%d\n", strcompare(s1, s2));
	
	return 0;
}
