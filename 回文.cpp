
#include <stdio.h>
#include <string.h>
 
#define MAXN 20

int isPalindrome(char *s)
{
	int n=strlen(s);
	int i, j,count=0;
	for (i = 0, j = n - 1; i < n, j >= 0; i++, j--)
	{
		if (*(s + i) == *(s + j))
		{
			count++;
		}
	}
	if (count == n)
		return 1;
	else return 0;
 
}
int main()
{
    char s[MAXN];
 
    scanf("%s", s);
    if ( isPalindrome(s)==1 )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);
 
    return 0;
}
