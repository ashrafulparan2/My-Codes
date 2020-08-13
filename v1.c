#include <stdio.h>
int main()
{
    double c,f,c1;
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%lf%lf",&c,&f);
        c1=(f*5)/9;
        printf("Case %d: %.2lf\n",i,c+c1);
    }

    return 0;
}
