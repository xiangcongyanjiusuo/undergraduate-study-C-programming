#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define n 100

struct Student
{
	int num;
	char name[20];
	int score;
}a[n];

int main()
{
	FILE *fp1,*fp2;
	int i;
	if((fp1=fopen("in1.txt","r"))==NULL)
	{
		printf("cannot open the file\n");
		exit(0);
	}
	if((fp2=fopen("file2.txt","w"))==NULL)
	{
		printf("cannot open the file\n");
		exit(0);
	}
	
	for(i=0;i<n;i++)
	{
		fscanf(fp1,"%s %d %d\n",a[i].name,&a[i].num ,&a[i].score );
	}
	for(i=0;i<n;i++)
	{
		printf("%s %d %d\n",a[i].name ,a[i].num ,a[i].score );
	}
						//打开文件并传递数据 
	
	int max,m;
	max=0;
	m=a[max].score;
	for(i=0;i<n;i++)
	{
		if( a[i].score >m )
		{
			max = i;
			m = a[max].score;
		}
	}
	
	for(i=0;i<n;i++)
	{
		if( a[i].score == m )
		{
			printf("成绩最高者为：\n"); 
			printf("%d %s %d \n",a[i].num ,a[i].name ,a[i].score );
			fprintf(fp2,"成绩最高者为：\n");
			fprintf(fp2,"%d %s %d \n",a[i].num ,a[i].name ,a[i].score );
			putchar(10);
		}
	}						//输出成绩最高者信息 
	
	int ave=0;
	for(i=0;i<n;i++)
	{
		ave+=a[i].score;
	} 
	ave=ave/100;
	
	int t=0;//临时计数 
	for(i=0;i<n;i++)
	{
		if(a[i].score > ave)	t++; 
	}
	printf("高于平均成绩有%d人\n",t);
	fprintf(fp2,"高于平均成绩有%d人\n",t);
	
	t=0;
		for(i=0;i<n;i++)
	{
		if(a[i].score < ave)	t++; 
	}
	printf("低于平均成绩有%d人\n",t);
	fprintf(fp2,"低于平均成绩有%d人\n",t);
	
	t=0;
	for(i=0;i<n;i++)
	{
		if(a[i].score == ave)	t++; 
	}
	printf("等于平均成绩有%d人\n",t);
	fprintf(fp2,"等于平均成绩有%d人\n",t);
						//输出三类人数
	
	int x;
	float y=0,l=0,z=0,j=0,b=0;
	for(i=0;i<n;i++)
	{
		x=a[i].score/10;
		switch(x)
		{
			case 9:y++;break; 
 			case 8:l++;break; 
 			case 7:z++;break; 
 			case 6:j++;break;
			case 5:  
 			case 4:
			case 3:  
 			case 2:  
 			case 1:  
			case 0:b++;break;
		}
	}
	printf("优秀%0.0f人，比例%0.2f;良好%0.0f人，比例%0.2f;中等%0.0f人，比例%0.2f;及格%0.0f人，比例%0.2f;不及格%0.0f人，比例%0.2f;\n",y,y/100,l,l/100,z,z/100,j,j/100,b,b/100);
	fprintf(fp2,"优秀%0.0f人，比例%0.2f;良好%0.0f人，比例%0.2f;中等%0.0f人，比例%0.2f;及格%0.0f人，比例%0.2f;不及格%0.0f人，比例%0.2f;\n",y,y/100,l,l/100,z,z/100,j,j/100,b,b/100);
	 			//显示成绩阶梯和比例
	fclose(fp1);
	fclose(fp2);
	
	system("pause");
	return 0;
}
