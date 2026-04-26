#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct Student
	{
		int num;
		char name[20];
		int score;
	};
    Student a={10101,"Li Hua",97};
	printf("%d\n%s\n%d\n",a.num,a.name,a.score);
	system("pause");
	return 0;
}
