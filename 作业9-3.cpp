#include<stdio.h>
#include<stdlib.h>
void cha(char []);
int main()
{
	char a[3][80];
	gets(*a);
	cha(*a);
	system("pause");
	return 0;
}
void cha(char *a)
{
	int b=0,c=0,d=0,e=0,f=0,i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]<='Z'&&a[i]>='A')	b++;
		else if(a[i]<='z'&&a[i]>='a')	c++;
		else if(a[i]<='9'&&a[i]>='0')	d++;
		else if(a[i]==' ')	e++;
		else f++;
	}
	printf("大写字母有%d个，小写字母有%d个，数字有%d个，空格有%d个，其他字符有%d个",b,c,d,e,f);
}
