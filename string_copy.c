#include <stdio.h>
#include <string.h>
int main()
{
    char a[50];
    char b[50];

    gets(a);

    strcpy(b,a);

    printf("%s\n",a);
    printf("%s\n",b);

    return 0;
}
