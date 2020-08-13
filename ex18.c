#include <stdio.h>
int main()
{
    long long n, m, k;
    scanf("%lld", &n);
    if(n>2)
    {
        if(n%2)
        {
            m = ((n*n)-1)/2;
            k = ((n*n)+1)/2;
            printf("%lld %lld\n", m, k);
        }
        else
        {
            m = ((n*n)/4)-1;
            k = ((n*n)/4)+1;
            printf("%lld %lld\n", m, k);
        }
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}
