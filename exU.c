#include <stdio.h>
#define max 200001
int main()
{

    int a[max],b[max];
    long n, k, q;
    scanf("%ld %ld %ld", &n, &k, &q);
    for(long i = 0; i < n; i++)
    {
        long l, r;
        scanf("%ld %ld", &l, &r);
        a[l]++;
        a[r + 1]--;
    }

    for(long i = 1; i < max; i++)
    {
        a[i] += a[i - 1];
    }
    for(long i = 1; i < max; i++)
    {
        b[i] += b[i - 1] + (a[i] >= k);
    }

    while(q--)
    {
        long l, r;
        scanf("%ld %ld", &l, &r);
        printf("%ld\n", b[r] - b[l - 1]);
    }

    return 0;
}
