#include<stdio.h>
#include<stdlib.h>
struct Student
{
	int num;
	char name[20];
	int score;
}a[5];
int main()
{
	struct Student a[5]={{1,"Lihua",58},{2,"Xim",77},{3,"Xi",44},{4,"Tom",55},{5,"Pater",98}};
	struct Student t;
	int i,j,k;
	for(i=0;i<4;i++)
			for(j=i+1;j<5;j++)
				if(a[i].score<a[j].score)
				{t=a[i];a[i]=a[j];a[j]=t;}
	for(i=0;i<=4;i++)
	{
		printf("%d  %s  %d\n",a[i].num,a[i].name,a[i].score);
	}
	system("pause");
	return 0;
}
