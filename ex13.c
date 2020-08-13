#include <stdio.h>
int main()
{
    char s[100];
    char s1[100];
    int j;
    gets(s);
    for(int i=0;i<100;i++)
    {
        if(s[i]=='1')
        {
            for(j=0;j;j++)
            {
                s1[i]='1';
            }
            printf("\n\n%d\n",j);
        }
        else if(s[i]=='2')
        {
            printf("\n\n%d\n",j);
           for(j;j<100;j++)
            {
                s1[i]='1';
            }
        }
        else if(s[i]=='3')
        {
         for(j;j<100;j++)
            {
                s1[i]='3';
            }
        }
    }
   // puts(s1);
}
