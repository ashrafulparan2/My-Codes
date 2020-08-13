#include <stdio.h>
#include <string.h>

int main()
{
    int x=10;
    char a[100]="Bangla";
    char b[100]="Bangla";
    x=strcmp(a,b);
    printf("%d",x);
}
