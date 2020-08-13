#include <stdio.h>
#include <math.h>
int main()
{
    long long n,k;
    scanf("%lld",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&k);
        long double f = sqrt(8*k-7);
        int g = (int)f;
        if(g==f)
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
        }
    }

    return 0;
}
