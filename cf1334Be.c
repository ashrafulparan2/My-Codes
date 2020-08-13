#include <stdio.h>
#include <stdlib.h>
int comparetor (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

#include <stdio.h>
int main()
{
    long long t,n,x,i,j,sum=0;
    int b[1000000],c;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        sum=0;
        scanf("%lld%lld",&n,&x);
        for(j=0;j<n;j++)
        {
            scanf("%d",&c);
            b[j]=c;
        }
        qsort (b,n, sizeof(int), comparetor );

        for(j=0;j<n;j++)
        {
            sum+=b[j];
            if((sum/n)>=x)
                printf("%lld/n",n);
            else if(((sum-b[0])/n-1)>=x)
                printf("%lld/n",n-1);
            else if(((sum-b[1])/n-2)>=x)
                printf("%lld/n",n-2);
            else
                printf("0\n");
        }
    }
}
