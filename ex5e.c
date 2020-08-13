#include <stdio.h>
#include <math.h>
int main()
{
    int  T;
    double r;
    scanf("%d", &T);
    for(int i=1;i<=T;i++)
    {
        scanf("%lf",&r);
        double a = (4*r*r) -(2*acos(0.0)*r*r) + pow(10,-9);
        printf("Case %d: %.2lf\n", i, a);
    }

}
