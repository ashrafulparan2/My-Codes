#include <stdio.h>

unsigned long long mul(unsigned long long a,unsigned long long b)
{
    return a*b;
}


int main()
{
    int t;
    unsigned long long a,b,ans;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%llu%llu",&a,&b);
        ans = mul(a,b);
        printf("%llu\n",ans);
    }


    return 0;
}
