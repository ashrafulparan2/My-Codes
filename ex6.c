#include <stdio.h>
int main()
{
    int T,N,n,i,j,k;
    scanf("%d", &T);
    for(int i=1;i<=T;i++)
    {
        scanf("%d", &N);
        for(j=1,k=0;j<=N;j++)
        {
            scanf("%d", &n);
            if(n>0)
            {
                k+=n;
            }
        }
        if(k>=0)
        {
            printf("Case %d: %d\n", i, k);
        }
    }
}
