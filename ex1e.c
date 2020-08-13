#include <stdio.h>
#include <string.h>

int main()
{
    char arr1[101];
    char arr2[101];
    gets(arr1);
    gets(arr2);

    int n = strlen(arr1);
    for(int i=0; i<n; i++)
    {
        if(arr1[i]==arr2[i])
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }

}

