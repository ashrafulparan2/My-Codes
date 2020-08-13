#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    gets(s);
    int x=strlen(s);
    for(int i=0; i<x-1; i+=2)
    {
        for(int j=0; j<x-i-2; j+=2)
        {
            if(s[j]>s[j+2])
            {
                char temp=s[j];
                s[j]=s[j+2];
                s[j+2]=temp;
            }
        }
    }
    puts(s);
}
