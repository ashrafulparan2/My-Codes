#include<stdio.h>
#include<string.h>
int arr[27];
int main()
{
    char s[110];
    int i,len,count=0;
    scanf("%s",s);
    len=strlen(s);
    for(i=0; i<len; i++)
    {
        if(arr[s[i]-'a']==0)
        {
            count++;
            arr[s[i]-'a']=1;
        }
    }
    if(count%2)
        printf("IGNORE HIM!\n");
    else
        printf("CHAT WITH HER!\n");
    return 0;
}

