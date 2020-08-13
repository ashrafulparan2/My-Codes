#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,count=0,len;
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        char arr[30];
        gets(arr);
         len=strlen(arr);
         for(i=0; i<len; i++)
        {
            if(arr[i]==' ')
            {
                count++;
            }
        }



    }


}
