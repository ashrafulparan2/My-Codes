#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,a1,b1,c1,ans;
    scanf("%d%d%d", &a, &b, &c);
    a1=sqrt((a*b)/c);
    b1=sqrt((b*c)/a);
    c1=sqrt((c*a)/b);
    ans=(a1+b1+c1)*4;
    printf("%d\n", ans);

    return 0;
}
