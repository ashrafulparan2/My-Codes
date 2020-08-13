#include <stdio.h>
#include <stdlib.h>
int comparetor (const void * a, const void * b)
{
    return ( *(int*)b - *(int*)a );
}

int main()
{
    int t,n,x,c,b[n];
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%d%d",&n,&x);
        for(int i=0; i<n; i++)
        {
            scanf("%d",&c);
            b[i]=c;
        }
        qsort (b,n, sizeof(int), comparetor );
        for(int i=0; i<n; i++)
        {
            for(int i=0; i<100; i++)
            {
                if(b[i]==i)
                {
                    continue;
                }

                else
                {
                    b[i]++;
                    break;
                }

            }
        }
        printf("%d",b[i]);
    }
}
