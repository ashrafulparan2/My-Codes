#include <stdio.h>
#define pi 2*acos(0.0)
int main()
{
    int T;
    scanf("%d", &T);
    for(int i=1;i<=T;i++)
    {
        double r1,r2,h,p,r,area;
        scanf("%lf%lf%lf%lf", &r1, &r2, &h, &p);
        r=r2+((r1-r2)*p)/h;
        area=((r*r+r2*r2+r*r2)*p*pi)/3;
        printf("Case %d: %.9lf\n", i, area);
    }

    return 0;
}
