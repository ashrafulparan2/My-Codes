#include <stdio.h>
int main()
{
    int a,b,x;
    scanf("%d",&x);
    b=x%10;
    while(x>10)
    {
        x/=10;
    }
    printf("%d\n",b+x);
}
