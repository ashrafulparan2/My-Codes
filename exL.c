#include <stdio.h>
int main()
{
    unsigned long long t,a,b,c,d,i;
    scanf("%llu",&t);
    for(i=0;i<t;i++)
    {
        scanf("%llu%llu%llu",&b,&c,&d);
        a=((c-b)+(c-d));
        printf("%llu\n",a);
    }
}
