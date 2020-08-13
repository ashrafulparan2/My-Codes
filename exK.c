#include <stdio.h>
#include <stdlib.h>
int comparetor (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

int main()
{
    int n,c,i,count=0;
    int a[10000000],b[1000000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&c);
        a[i]=c;
        b[i]=c;
    }
    qsort (b,n, sizeof(int), comparetor );
    count=0;

    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            count++;
        }
        if(count>2)
        {
            break;
        }
    }

    if(count<=2)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
