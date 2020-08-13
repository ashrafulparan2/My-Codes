#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==1)
    {
        printf("1\n");
        return 0;
    }
    printf("1\n");
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
        }
    }
    printf("%d\n",n);

    return 0;
}
