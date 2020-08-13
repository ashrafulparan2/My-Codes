#include <stdio.h>
#include <string.h>

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

    if(x==n)
    {
        for (i = 0; i < n-1; i++)
        {
            for (j = i+1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
                if (c[i] > c[j])
                {
                    temp2 = c[i];
                    c[i] = c[j];
                    c[j] = temp2;
                }
            }
        }
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

    }
    else
    {
        printf("NO\n");

    }

    return 0;

}
