#include <stdio.h>
#include <string.h>
int main()
{
    char a[101];
    gets(a);
    strlwr(a);
    for(int i=0;a[i]!='\0';i++)
    {
        if (a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='y')
        {
            printf(".%c",a[i]);
        }
    }
    printf("\n");

    return 0;
}
