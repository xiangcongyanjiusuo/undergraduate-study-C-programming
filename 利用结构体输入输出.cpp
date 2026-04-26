#include<stdio.h>
#include<stdlib.h>
struct Student
{
	int num;
	char name[10];
	int price;
	char are[10];
	int numb;
};
void input(struct Student a[5])
{
	int i;
	for(i=0;i<5;i++)
		scanf("%d %s %d %s %d",&a[i].num,a[i].name,&a[i].price,a[i].are,&a[i].numb);
}
void print(struct Student a[5])
{
	int i;
	for(i=0;i<5;i++)
		printf("%d %s %d %s %d",a[i].num,a[i].name,a[i].price,a[i].are,a[i].numb);
}
int main()
{
	struct Student a[5];
	input(a);
	print(a);
	return 0;	
} 
