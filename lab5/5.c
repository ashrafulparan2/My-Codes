#include <stdio.h>
int main()
{
    int a,b,c,x;
    scanf("%d%d%d",&a,&b,&c);
    x=(a<b)?((a<c)?a:c):((b<c)?b:c);
    printf("Smallest = %d",x);
}
