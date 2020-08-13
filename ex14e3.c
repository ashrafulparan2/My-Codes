#include <stdio.h>
int main()
{
    int n, a0=0, a5=0;
    scanf("%d", &n);
    for (int i=1;i<=n;i++)
    {
        int a;
        scanf("%d", &a);
        if(a==0)
        {
            a0++;
        }
        else if(a==5)
        {
            a5++;
        }
    }
    if(a0==0)
    {
        printf("-1\n");
    }
    else if(a5<9)
    {
        printf("0\n");
    }
    else
    {
        a5 -= a5 % 9;
        for(int i=1;i<=a5;i++)
        {
            printf("5");
        }
        for(int i=1;i<=a0;i++)
        {
            printf("0");
        }
        printf("\n");
    }

    return 0;
}
