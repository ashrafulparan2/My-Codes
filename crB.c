#include <stdio.h>
#include <math.h>
int main()
{
    unsigned long long t,n,k,c,m=(pow(10,9)+7),i,j,ans=1;
    scanf("%llu",&t);
    //printf("%d\n\n",m);
    for(i=1;i<=t;i++)
    {
        ans=1;
        scanf("%llu%llu",&k,&n);
        c=(n/k);
        for(j=1;j<=c;j++)
        {
            ans*=(1+j*k);
        }
        ans=(ans%m);
        printf("Case %llu: %llu\n",i,ans);
    }

    return 0;
}
