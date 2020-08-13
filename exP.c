#include <stdio.h>
int main()
{
    long long t,m,k,j;
    for(int i=0;i<10;i++)
    {
        scanf("%lld%lld",&t,&m);
        j=(t-m)/2;
        k=j+m;
        printf("%lld\n%lld\n",k,j);
    }
}
