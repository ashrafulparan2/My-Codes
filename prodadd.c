#include <stdio.h>
int main()
{
    int n=0,sum=0,prod=1;
    printf("Enter numbers, emter a  negative number to stop\n");
    while(1)
    {
        scanf("%d", &n);
        if(n<0)
            break;
        sum+=n;
        prod*=n;
    }
    printf("%d %d\n",sum,(sum==0)?0:prod);
}
