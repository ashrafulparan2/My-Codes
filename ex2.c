#include <stdio.h>
#include <stdlib.h>
int main()
{
    int y=0;
    scanf("%d", &y);
    here:
    y++;
    char a[4];
    itoa(y, a, 10);

    if((a[0]!=a[1])&&(a[0]!=a[2])&&(a[0]!=a[3])&&(a[1]!=a[2])&&(a[1]!=a[3])&&(a[2]!=a[3]))
    {
        printf("%s\n",a);
    }
    else
    {
        goto here;
    }
}
