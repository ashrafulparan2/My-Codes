#include <stdio.h>
int main()
{
    int table[100][10];
    int i,j,n;
    for(i=1;i<=100;i++)
    {
        for(j=1;j<=10;j++)
        {
            table[i-1][j-1]=i*j;
        }
    }
    for(i=1;i<=100;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%d*%d=%d\n",i,j,table[i-1][j-1]);
        }
    }
    return 0;
}
