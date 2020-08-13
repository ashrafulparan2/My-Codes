#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    ch = getchar();
    if(isupper(ch))
    {
        putchar(tolower(ch));
    }
    else{
        putchar(toupper(ch));
    }

    return 0;
}
