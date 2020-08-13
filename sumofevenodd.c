#include <stdio.h>
int main()
{
    int n,sumE=0,sumO=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2)
            sumO+=i;
        else
            sumE+=i;
    }
    printf("%d\n",sumE);
    printf("%d\n",sumO);
    return 0;
}
