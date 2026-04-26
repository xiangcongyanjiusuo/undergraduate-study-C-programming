#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct market
{
	int num;
	int money;
}a[100];

int main()
{
	for(int n=0;n<100;n++)
	{
		srand((unsigned)time(NULL));
		a[n].num =rand()%500;
		srand((unsigned)time(NULL));
		a[n].money = rand()%100;
	}
	FILE *fp;
	if((fp==fopen("E:\\file2","w"))==NULL)
	{
		printf("cannot open the file\n");
		exit(0);
	}
	for(int n=0;n<100;n++)
	{
		if(fwrite(&a[n],sizeof(struct market),1,fp)!=1)
			printf("file write error\n");
	}
	fclose(fp);
	int total=0;
	for(int n=0;n<100;n++)
	{
		total+=a[n].money ;
	}
	printf("The total money %d",total);
	return 0;
}

