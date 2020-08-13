#include <stdio.h>

int main()
{
    char a[100];
    char b[100];
    char c[100];
    char temp;
    char temp2;
    gets(a);
    gets(b);
    gets(c);
    strcat(a,b);
    int i, j;
    int n = strlen(a);
    int x = strlen(c);

        int y;

        y=strcmp(a,c);

        if(y==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    return 0;

}
