#include <stdio.h>
int main()
{
    char str[30],rev_str[30];
    int i,j,length;
    gets(str);

    length = 0;

    for(i=0; str[i] != '\0'; i++)
    {
        length += 1;
    }

    for(i=length-1,j=0;i>=0;i--)
    {
        rev_str[j] = str[i];
        j++;
    }
    rev_str[j] = '\0';
    printf("%s\n",rev_str);

}
