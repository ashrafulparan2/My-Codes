#include <stdio.h>
int main()
{
    int d1,d,y,m,i;
    printf("Enter Day = \n");
    scanf("%d",&i);
    y=i/365;
    d1=i%365;
    m=d1/30;
    d=d1%30;
    printf("%d Years,%d Months,%d Days",y,m,d);
}
