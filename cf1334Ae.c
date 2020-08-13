#include <stdio.h>
int main()
{
    int t,i,p[101],c[101];
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
        int n;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d%d",&p[i],&c[i]);
        }
        for(i=0;i<n;i++)
        {
            //scanf("%d%d",&p[i],&c[i]);
            if(p[i]>=c[i])
            {
                if(p[i+1]<=p[i])
                {
                    if(c[i+1]<=c[i])
                    {
                        printf("YES\n");
                    }
                    else
                        printf("NO\n");
                }
                else
                    printf("NO\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
}
