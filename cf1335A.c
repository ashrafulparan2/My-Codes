#include <stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int count=ceil(n/2.0)-1;
        printf("%d\n",count);
    }

    return 0;
}
