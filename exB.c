#include <stdio.h>
#include <stdlib.h>
int comparetor (const void * a, const void * b)
{
    return ( *(int*)b - *(int*)a );
}

int main()
{
    int n,a,i,b[101],count=0,sum=0;
    long long m;
    scanf("%d%lld",&n,&m);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        b[i]=a;
    }
    qsort (b,n, sizeof(int), comparetor );

    for(int i=0; i<n; i++)
    {
        while(sum<=m)
        {
            sum += b[i];
            ++count;
        }
    }

    printf("%d\n",count);
}
