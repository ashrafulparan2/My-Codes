#include <stdio.h>
#include <string.h>
int main()
{
    int i,count=0;
    char arr[30];
    gets(arr);
    int len=strlen(arr);
    for(i=0;i<len;i++)
    {
        if(arr[i]==' ')
        {
            count++;
        }
    }
    printf("%d\n",count+1);
}
