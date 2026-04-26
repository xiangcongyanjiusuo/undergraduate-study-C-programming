#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	while(argc>1)
	{
		++argv;
		printf("%s\n",*argv);
		--argc;
	}
	return 0;
}

