#include <stdio.h>
int square(int x)
{
    int y;
    y=x*x;
    return y;
}

int main()
{
   int i,sq;
   scanf("%d",&i);
   sq=square(i);
   printf("%d",sq) ;
}
