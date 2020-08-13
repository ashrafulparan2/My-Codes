#include <stdio.h>
#include <string.h>
int arr[27];
int main()
{
    int count=0,i;
    char s[101];
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(arr[s[i]-'a']==0)
        {
            count++;
            arr[s[i]-'a']=1;
        }
    }

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
