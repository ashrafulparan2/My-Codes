#include <stdio.h>
#include <string.h>
int main()
{
    char a[50];

    gets(a);

    int length = strlen(a);

    printf("%d\n",length);

    return 0;
}
