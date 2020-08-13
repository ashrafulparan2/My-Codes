#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int isprime=1;

    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            isprime=0;
            break;
        }
    }


    printf("%d is %s",n,((isprime)?"prime":"not prime"));
    return 0;
}
