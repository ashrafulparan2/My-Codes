#include <stdio.h>
#include <string.h>
int arr[27];
count=0;
int hello()
{
    char s[101];
    gets(s);
    for(int i=0; i<strlen(s); i++)
    {
        if(arr[s[i]-'a']==0)
        {
            count++;
            arr[s[i]-'a']=1;
        }
    }

    return 0;

}
int bye()
{
    if(count%2)
    {
        printf("IGNORE HIM!\n");
    }
    else
    {
        printf("CHAT WITH HER!\n");
    }

    return 0;
}


int main()
{
    hello();

    bye();

    return 0;
}

