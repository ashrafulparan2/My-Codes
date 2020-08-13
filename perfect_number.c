#include <stdio.h>
int main()
{
    int n,sum=1;
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    printf((sum==n)?"Perfect Number\n":"Not Perfect number\n");
}
