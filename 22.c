#include <stdio.h>
#define pi 2*acos(0.0)
int main()
{
    int  T;
    float r;
    scanf("%d", &T);
    for(int i=1;i<=T;i++)
    {
        scanf("%f",&r);
         printf("Case %d: %.2f\n",i, (4*r*r) -(pi*r*r));
    }


}
