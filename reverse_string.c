#include <stdio.h>
int main()
{
    char str[30];
    int i,length;
    gets(str);

    length = 0;

    for(i=0; str[i] != '\0'; i++)
    {
        length += 1;
    }

    for(i=length-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");

}
