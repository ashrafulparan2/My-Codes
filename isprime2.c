#include <stdio.h>
int isprime(int n)
{
    int isprime=1;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            isprime=0;
            break;
        }
    }
    return isprime;
}

int main()
{
    int n=0;
    scanf("%d",&n);
    printf("%d is %s",n,((isprime(n))?"prime":"not prime"));
    return 0;
}

