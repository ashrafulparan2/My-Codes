#include <stdio.h>
#include <stdlib.h>
int comparetor (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}


int main()
{
    long long n,m,i,j,sum,cnt,ans;
    scanf("%lld",&n);
        long long a[n];
        sum=0;
        for(i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
            sum+=a[i];
        }
        sum=sum/2;
        qsort (a,n, sizeof(int), comparetor );
        cnt=0;
        ans=0;
        for(i=n-1; i>=0; i--)
        {
            ans+=a[i];
            cnt++;
            if(ans>sum)
                break;
        }
        printf("%lld\n",cnt);
    return 0;
}
