#include <stdio.h>
#include <math.h>
int main()
{
    int T,i;
    scanf("%d",&T);
    for(i=0; i<T; i++)
    {
        double a,b,c,d,s,ans;
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        s=(a+b+c+d)/2;
        ans=sqrt((s-a)*(s-b)*(s-c)*(s-d));
        printf("%.2lf\n",ans);
    }
}
