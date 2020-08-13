#include <stdio.h>
#include <math.h>
int main()
{
    double a,b;
    scanf("%lf",&a);
    double x=a;
    a=a/1000.0;
    b=ceil(a);
    int s=b;
    switch(s)
    {
    case 10:
    case 9:
        x=x+x*0.08;
        printf("8 Percent bonus\n");
        printf("Salary = %.2lf",x);
        break;
    case 8:
    case 7:
        x=x+x*0.05;
        printf("5 Percent bonus\n");
        printf("Salary = %.2lf",x);
        break;
    case 6:
    case 5:
    case 4:
        x=x+x*0.02;
        printf("2 Percent bonus\n");
        printf("Salary = %.2lf",x);
        break;
    default:
        x=x+x*0.01;
        printf("1 percent bonus\n");
        printf("Salary = %.2lf",x);
        break;
    }

}
