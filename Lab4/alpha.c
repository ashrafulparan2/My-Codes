#include <stdio.h>

int main()
{
    char ch;
    ch = getchar();
    if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
    {
        printf("%c is an Alphabet\n",ch);
    }
    else if(ch>='0'&&ch<='9')
    {
        printf("%c is a Digit\n",ch);
    }
    else
    {
        printf("%c is a special character\n",ch);
    }
}
