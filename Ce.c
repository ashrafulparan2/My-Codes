#include<stdio.h>
#include<string.h>
#include<ctype.h>
int x=0;
char s[100];
int hello()
{
    gets(s);
    for(int i=1; s[i]!='\0'; i++)
        if(islower(s[i]))
        {
            x=1;
            break;
        }
}
int bye()
{
    if(x==1)
        puts(s);
    else
    {
        if(islower(s[0]))
            putchar(toupper(s[0]));
        else
            putchar(tolower(s[0]));
        for(int i=1; s[i]!='\0'; i++)
            putchar(tolower(s[i]));

    }
    return 0;
}
int main()
{
    hello();
    bye();
    return 0;
}
