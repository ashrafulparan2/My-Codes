#include <stdio.h>
int main()
{
    double A,B,C;
    scanf("%lf%lf%lf",&A,&B,&C);
    if(A>B && A>C)
    {
        A=A;
    }
    else if(B>A && B>C)
    {
        A=B;
    }
    else
    {
        A=C;
    }
    printf("%lf",A);
}
