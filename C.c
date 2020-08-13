#include <stdio.h>
#include <string.h>

int hello()
{
    char s[101];
    scanf("%s",s);

    if(isupper(s[0]))
    {
        puts(s);
    }
    else
    {
        strupr(s);
        printf("%c",s[0]);
        strlwr(s);
        for(int i=1; i<strlen(s); i++)
        {
            printf("%c",s[i]);
        }
    }

    return 0;
}

int main()
{
    hello();

    return 0;
}
