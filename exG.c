#include <stdio.h>
int main()
{
    long long T,W,B;
    scanf("%lld",&T);
    for(int i=0;i<T;i++)
    {
        scanf("%lld%lld",&W,&B);
        if(B%2)
            printf("1.000000\n");
        else
            printf("0.000000\n");
    }
}
