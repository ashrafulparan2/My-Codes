#include <stdio.h>
#include <stdlib.h>
int comparetor (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

int main()
{
    //long long t,n,x,sum=0;
    int t,n,x,sum=0;
    int a[10000000];
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d%d",&n,&x);
        for(int i=0;i<n;i++)
        {
            scanf("%d",a[i]);
        }
        /*qsort (a,10000000, sizeof(int), comparetor );
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            if((sum/n)>=x)
            {
                printf("%d\n",n);
            }
            else if(((sum-a[0])/n-1)>(n-1))
                printf("%d\n",n-1);
            else if(((sum-a[1])/n-2)>(n-2))
                printf("%d\n",n-2);
            //else if(((sum-a[i])/n-i-1)>(n-i-1))
                //printf("%d\n",n-i-1);
            else
                printf("0\n");

        }*/
    }
}
