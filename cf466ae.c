#include <stdio.h>
int main()
{
    int n,m,a,b,ans1,ans2,x;
    scanf("%d%d%d%d", &n, &m, &a, &b);
    for(int i=1;i<=1000;i++)
    {
        ans1=(n/m)*b+(n%m)*a;
        ans2=((n/m)+i)*b;

        if(ans2<ans1)
        {
            x=ans2;
            break;
        }
        else if((n*a)<ans1)
        {
            x=n*a;
        }
        else
        {
            x=ans1;
        }
    }

    printf("%d\n",x);
}
