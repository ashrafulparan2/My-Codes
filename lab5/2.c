#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    c=getchar();
    switch(toupper(c))
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Vowel\n");
        break;
    default:
        printf("Consonant\n");
        break;
    }

}
