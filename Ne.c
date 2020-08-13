#include <stdio.h>

int hi()
{
    long long a[6],min,max,sum=0;
    scanf("%d",&a[0]);
    min=a[0];
    max=a[0];

    for(long long i=0;i<4;i++)
    {
        scanf("%lld",&a[i]);
        sum+=a[i];
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("%lld %lld\n",sum-max+1,sum-min+1);

    return 0;
}

int main()
{
    hi();

    return 0;
}
