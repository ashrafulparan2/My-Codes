#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d,x,x1,x2;
    scanf("%lf%lf%lf",&a,&b,&c);
    d=b*b-4*a*c;
    if(a==0.0)
    {
        x=-(c/b);
        printf("%.2lf\n",x);
    }
    else if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("%.2lf\n",x1);
        printf("%.2lf\n",x2);

    }
    else
    {
        printf("Imaginary\n");
    }
}
