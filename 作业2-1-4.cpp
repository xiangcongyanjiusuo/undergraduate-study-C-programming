#include <stdio.h>

void sort(int *p1, int *p2, int *p3)
{
	int *p[3]={p1,p2,p3};
	int **pt,t;
	pt=p;
	int i,j;
	for(i=0;i<2;i++)
		for(j=i+1;j<3;j++)
			if(**(pt+i)<**(pt+j))
				{t=**(pt+i);**(pt+i)=**(pt+j);**(pt+j)=t;}
}

int main() {
	int a, b, c, *p1, *p2, *p3;

	printf("enter three number:\n");
	scanf("%d %d %d", &a, &b, &c);

	p1 = &a; p2 = &b; p3 = &c;
	sort(p1, p2, p3);
	printf("The descending order is :%d, %d, %d\n", a, b, c);

	return 0;
}

