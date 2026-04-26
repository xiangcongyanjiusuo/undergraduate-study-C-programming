#include <stdio.h>
int main()
{
    int n,temp,sum; /*n表示要判断的数，temp表示因子，sum表示因子之和*/ 
    for(n=1;n<1000;n++) 
    {
        sum= 0;
        for(temp=1;temp<n;temp++)
        {
            if(n%temp==0) /*判断n能否被temp整除，能的话temp即为因子*/ 
            {
                sum=sum+temp; /*求因子之和*/ 
            }
        }
        if(sum==n) /*判断此数是否等于因子之和*/ 
        {
            printf("%d its factors are ",n);
            for(temp=1;temp<n;++temp)
            {
                if(n%temp==0)
                    printf("%d ",temp);
            }
            printf("\n");
        }
         
    }
    return 0;
}
