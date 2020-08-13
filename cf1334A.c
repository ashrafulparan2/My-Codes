#include <stdio.h>
int main()
{
    int t,n,p[500],c[500],i,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d%d",p[i],c[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(p[i]>=c[i])
            {
                if(p[i]>=p[i+1])
                {
                    if(c[i]>=c[i+1])
                    {
                        printf("YES\n");
                    }
                    else
                    {
                        printf("NO\n");
                    }
                }
                else{
                    printf("NO\n");
                }
            }
            else
            {
                printf("NO\n");
            }
        }
    }

    return 0;
}

