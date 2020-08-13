#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);

    long a;
    long double b;
    double test;

    char ans[100];
    for(int h = 0; h < n; h++)
    {
        scanf("%d",&a);
        b = sqrt(8*a - 7);
        printf("\n\n%d\n",b);
        if(modf(b, &test) == 0) { ans[50] += "1 "; }
        else { ans[50] += "0 "; }
    }

    printf("%s",ans);
    return 0;
}
