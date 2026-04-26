#include<stdio.h>
#include<stdlib.h>
int main()
{
	char t;
	int a,b,c,d;
	a=0;
	b=0;
	c=0;
	d=0;
	while((scanf("%c",&t))!='\n')
	{
		if(t>='a'&&t<='z'||t>='A'&&t<='Z')
			a++;
		else if(t==' ')
			b++;
		else if(t>='0'&&t<='9')
			c++;
		else
			d++;
	}
	printf("英文字母有%d个、空格有%d个、数字有%d个、其他字符有%d个\n",a,b,c,d);
	system("pause");
	return 0;
} 
