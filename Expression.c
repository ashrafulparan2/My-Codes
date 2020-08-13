#include <stdio.h>
int main()
{
    int n;
    double sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=(i+3)/(i*i-5.0);
    }
    printf("%lf\n",sum);
}
