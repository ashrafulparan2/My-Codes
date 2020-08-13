#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x,y;
    scanf("%d%d", &x, &y);
    char arr1[100];
    char arr2[100];
    itoa(x, arr1, 10);
    itoa(y, arr2, 10);
    printf("%s\n", arr1);
    printf("%s\n", arr2);

    int n = strlen(arr1);
    for(int i=1; i<=n; i++)
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
    printf("\n");
}
