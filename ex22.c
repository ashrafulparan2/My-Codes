#include <stdio.h>
int main()
{
    long long n, d, i, sum=0, ans;
    scanf("%lld", &n);
    for(i=0;i<n;i++)
    {
        scanf("%lld", &d);
        sum += d;
    }
    ans = sum*sum;
    printf("%lld\n", ans);

    return 0;
}
