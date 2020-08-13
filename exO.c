#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    double a,a1,b1,c1,b,c,s,area,r,d=0.0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lf%lf%lf%lf",&a,&a1,&b1,&c1);
        b=(a*a1)/b1;
        c=(a*a1)/c1;
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        r=(a*b*c)/(4*area);
        if(sqrt(r*r-(a*a+b*b+c*c)/9)>0)
            d=sqrt(r*r-(a*a+b*b+c*c)/9)*2;
        printf("%.3lf\n%.3lf\n",area,d);
    }
}
