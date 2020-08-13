#include <stdio.h>
int main()
{
    double basic,h_rent,b_vata,total;
    scanf("%lf",&basic);
    h_rent=basic*0.35;
    b_vata=basic*.2;
    total=h_rent+b_vata+basic;
    printf("%.2lf\n",h_rent);
    printf("%.2lf\n",b_vata);
    printf("Total = %.2lf\n",total);
}
