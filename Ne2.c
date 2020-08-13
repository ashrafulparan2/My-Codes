#include <stdio.h>

int minmax()
{
    long long a[6],sum = 0,max = 0,min = 1000000000;
    for(int i=0; i<5; i++)
    {
        scanf("%lld",&a[i]);
    }

    for (int i = 0; i < 5; ++i)
    {
        sum += a[i];
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    printf("%lld %lld", sum-max, sum-min);

    return 0;
}


int main()
{
    minmax();

    return 0;
}
