#include <stdio.h>
#include<stdlib.h>
struct student
{
	int num;
	char name[10];
	float score;
};
int n = 4;
int main(void)
{
	struct student stu[4] = { 1,"sdff",34.5,2,"hfhf",67.0,3,"dgdg",90.0,4,"yd",85.0 };
	struct student *p[4], *pp;
	int i, j;
	for (i = 0; i < 4; i++)
		p[i]=&stu[i];
	for (i = 0; i < 4; i++)
		printf("%4d %-10s %7.1f\n", stu[i].num, stu[i].name, stu[i].score);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(p[i]->score <p[j]->score )
			{
				pp = p[i]; p[i] = p[j]; p[j] = pp;
			}
	for(i=0;i<4;i++)
		printf("%4d %-10s %7.1f\n", p[i]->num, p[i]->name, p[i]->score);
	system("pause"); return 0;
}
