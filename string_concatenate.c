#include <stdio.h>
int main()
{
    char a[30];
    char b[30];
    int i,j,length;

    gets(a);
    gets(b);

    for(i=0,length=0;a[i]!='\0';i++)
    {
        length+=1;
    }

    for(i=length,j=0; b[j] != '\0';i++,j++)
    {
        a[i] = b[j];
    }
    a[i] = '\0';

    printf("%s\n",a);

    return 0;
}
