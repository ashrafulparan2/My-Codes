#include <stdio.h>
int main()
{
    int n;
    double sum=0;
    scanf("%d",&n);
    if((n%7)==0)
    {
        for(int i=1; i<=n;i++)
        {
            sum+=1.0/i;
        }

    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            sum+=n/(double)i;
        }
    }
    printf("%lf\n",sum);
}
