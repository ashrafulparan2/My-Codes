#include <stdio.h>

long long fact(long long x)
{
    if(x>=1)
        return x*fact(x-1);
    else
        return 1;
}

int min(int x,int y)
{
    return (x<y)?x:y;
}

int main()
{
    long long a,b;
    scanf("%lld%lld",&a,&b);
    printf("%d\n",fact(min(a,b)));
    return 0;
}
