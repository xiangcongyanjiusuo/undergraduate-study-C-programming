#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,sum;
	sum=3;
	srand((unsigned)time(NULL)); 
	a= rand () %100;
	while(1)
	{
		sum--;
		scanf("%d",&b);
		if(b>a)
			printf("大了，还剩下%d次机会，请继续\n",sum);
		if(b<a)
			printf("小了，还剩下%d次机会，请继续\n",sum);
		if(b==a)
		{
			printf("恭喜你答对了\n");
			break;
		}
		if(sum==0)
		{
			printf("没有机会了\n");
			break;
		} 
	}
	system("pause");
	return 0;
}

