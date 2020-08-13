#include <stdio.h>
int main()
{
    int t,x,n,i,a;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&n,&x);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            for(i=1;i<=x;i++)
            {
                if(a==i)
                {
                    continue;
                }
                else
                {
                    a++;
                    x--;
                    if(x==0)
                    {
                       break;
                    }

                }
            }
            printf("%d\n",a);
        }

    }
}
