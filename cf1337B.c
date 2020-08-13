#include <stdio.h>
int main()
{
    int t,x,n,m,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&x,&n,&m);
        if(x<=20)
        {
            while(m--)
            {
                x=x-10;
                if(x<=0)
                {
                    goto here;
                }
            }


            while(n--)
            {
                x=(x/2)+10;
            }
        }
        else
        {
            while(n--)
            {
                x=(x/2)+10;
            }
            while(m--)
            {
                x=x-10;
            }
        }

        if(x>0)
            printf("NO\n");
        else
        {
            here:
            printf("YES\n");
        }



    }
}
