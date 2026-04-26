#include<stdlib.h>
#include<time.h>//随机数要用的头文件 
const int N=10;//定义的常量 
int sum=0;//全局变量控制成绩 
int change(int a) 
{
	int b=0;
	if(a==1)b=10;
	else if(a==2)b=7;
	else if(a==3)b=5;
	else b=0;
	return b;
}/ange函数将第几次作对的数转化为分数 
void jian()//减法函数 
{
	srand(time(0));//随机数函数前键定义  
	int a,b,c;
	int s=1,t=0;
	a=rand()%50; //随机产生一个50以内的数字 
	b=rand()%(50-a)+a;//随机产生一个a到50的数b b-a的数值一定大于等于0 满足条件 
	while(s!=4&&t!=1) //三次打错 或者 三次内答对 退出循环 
	{
	printf("%d-%d=\n",b,a);
	printf("第%d次输入：",s);
	scanf("%d",&c);
	if(c==b-a){t=1;}
	else {s++;}
    }
    if(s==4) printf("正确答案是%d\n",b-a);//特判三次没答对的话 输出正确答案 
	sum+=change(s);//三次内答对 成绩加分 
	//printf("%d\n",sum);
}
void jia()
{
	srand(time(0));
	int a,b,c;
	int s=1,t=0;
	a=rand()%50;
	b=rand()%(50-a);//产生一个0到50-a的数 使a，b的小于等于50； 
	while(s!=4&&t!=1) 
	{
	printf("%d+%d=\n",a,b);
	printf("第%d次输入：",s);
	scanf("%d",&c);
	if(c==a+b){t=1;}
	else {s++;}
    }
    if(s==4) printf("正确答案是%d\n",b+a);
	sum+=change(s);
	//printf("%d\n",sum);
}
int main()
{
for(int i=0;i<N;i++)
{
	srand(time(0));
	int flag;
	flag=rand()%2;//产生一个0或1的随机数； 
	if(flag==0)jian();//0的话执行减法 
	else jia();//1的话 执行加法。 
}
printf("%d\n",sum);
if(sum>90)printf("SMART\n");
else if(sum>80)printf("GOOD\n");
else if(sum>70)printf("OK\n");
else if(sum>60)printf("PASS\n");
else printf("TRY AGAIN\n");
return 0;
}
}
