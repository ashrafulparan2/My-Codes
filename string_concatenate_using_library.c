#include <stdio.h>
#include <string.h>
int main()
{
    char a[50];
    char b[50];

    gets(a);
    gets(b);

    strcat(a,b);

    printf("%s,  length=%d\n",a,strlen(a));

    return 0;
}

