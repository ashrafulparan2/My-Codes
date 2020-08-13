#include <stdio.h>
int main()
{
    int n;
    int values[4] = {1,3,9,7};
    scanf("%d", &n);
    n=n%4;
    printf("%d\n",values[n]);
}

