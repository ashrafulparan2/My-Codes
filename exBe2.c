#include <stdio.h>
#include <stdlib.h>
int comparetor (const void * a, const void * b)
{
    return ( *(int*)b - *(int*)a );
}

int main()
{
    int n,a,i,b[101],count=0,sum=0,ans=0;
    long long m;
    scanf("%d%lld",&n,&m);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        b[i]=a;
        if(b[i]==m)
            ans++;
    }
    qsort (b,n, sizeof(int), comparetor );

    if(ans!=0)
    {
        printf("1\n");
    }

    else
    {
        for(int i=0; i<n; i++)
        {
            sum+=b[i];
            count++;
            if(sum>=m)
            {
                printf("%d\n",count);
                break;
            }
        }
    }

    return 0;
}
