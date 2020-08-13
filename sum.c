#include <stdio.h>
int main()
{
    int n,sum=0,start,end,dif;
    scanf("%d%d%d",&start,&dif,&end);
    for(n=start;n<=end;n=n+dif)
    {
        sum = sum+n;
    }
    printf("Sum = %d",sum);

    return 0;
}
