#include <stdio.h>

int main()
{
    char ch;
    ch=getchar();
    if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
    {
        if(ch==('A')||ch==('E')||ch==('I')||ch==('O')||ch==('U')||ch==('A')||ch==('a')||ch==('e')||ch==('i')||ch==('o')||ch==('u'))
        {
            printf("%c is vowel\n",ch);
        }
        else
        {
            printf("%c is consonant\n",ch);
        }
    }
}
