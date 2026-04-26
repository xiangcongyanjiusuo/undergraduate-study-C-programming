#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
int main()
{
	char a[50][50]={"##########",
				   "#O   # ###",
				   "# ## #   #",
				   "#  #   # #",
				   "# #### # #",
				   "#      #  ",
				   "##########"};
	int i,x,y,p,q;
	char ch;
	
	x=1;y=1;p=5;q=10;
	for(i=0;i<=6;i++)
		puts(a[i]);
		
	while(x!=p||y!=q)
	{
		ch=getch();
		if(ch=='s'||ch==25)
		{
			if(a[x+1][y]!='#')
			{
				a[x][y]=' ';
				x++;
				a[x][y]='O';
			}
		}
		if(ch=='w'||ch==24)
		{
			if(a[x-1][y]!='#')
			{
				a[x][y]=' ';
				x--;
				a[x][y]='O';
			}
		}
		if(ch=='a'||ch==27)
		{
			if(a[x][y-1]!='#')
			{
				a[x][y]=' ';
				y--;
				a[x][y]='O';
			}
		}
		if(ch=='d'||ch==26)
		{
			if(a[x][y+1]!='#')
			{
				a[x][y]=' ';
				y++;
				a[x][y]='O';
			}
		}
		
	system("cls");
	for(i=0;i<=6;i++)
		puts(a[i]);
	Sleep(50);
			
	}
	system("cls");
	system("color 5b");
	printf("¹§Ï²µ½´ïÖÕµã\n");
	Sleep(5000);
	 
		
	return 0;
}
