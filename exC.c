#include <stdio.h>

int main()
{
    int count=0,Count=0;
    char s[101];
    gets(s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>97&&s[i]<122)
            count++;
        else
            Count++;
    }
    if(count<Count)
        printf("%s\n",strupr(s));
    else if(count>Count)
        printf("%s\n",strlwr(s));
    else
        printf("%s\n",strlwr(s));

}
