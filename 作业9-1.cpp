#include <stdio.h> /*提示：有3处错误*/     
#include <conio.h>
long fun(long num)
{ long k=1;
do
{k*=num%10;
num/=10;
}while(num)
return k;
}
int main()
{long n;
scanf("%ld",&n);
printf("\n%ld\n",fun(n));
}
