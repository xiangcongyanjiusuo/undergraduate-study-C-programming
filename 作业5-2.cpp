#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;
	for(a=1;a<=30;a++)
	{
		for(b=1;b<=30;b++)
		{
			for(c=1;c<=30;c++)
			{
				if(3*a+2*b+c==50&&a+b+c==30)
				{
					printf("男人、女人、小孩分别有%d,%d,%d人",a,b,c);
					printf("\n");
				}
			}		
		}
	}
	system("pause");
	return 0;
}
