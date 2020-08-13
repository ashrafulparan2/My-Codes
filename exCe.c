#include<stdio.h>
#include<string.h>
int main()
{

    char s[101];
    int count=0,Count=0;
    gets(s);

    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]>='a'&&s[i]<='z')
            count++;
        else
            Count++;
    }
    if(count>Count)
    {
        strlwr(s);
    }
    else if(count<Count)
    {
        strupr(s);
    }
    else if(count==Count)
    {
        strlwr(s);
    }

    puts(s);
}
