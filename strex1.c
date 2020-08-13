#include <stdio.h>

int main()
{
    char a[100];
    char b[100];
    gets(a);
    gets(b);
    for(int i=0;i<100;i++)
    {
        if(a[i]==b[i])
        {
           printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }

}
