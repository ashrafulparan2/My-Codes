#include <stdio.h>
int main()
{
    long long t,h,p,a,i,x;
    scanf("%lld",&t);
    for(i=0; i<t; i++)
    {
        long long j=1,count=0;
        scanf("%lld%lld%lld",&h,&p,&a);
        while(h!=0)
        {
            x=j*p;
            j++;
            h=h-x;
            count++;
            if(h>0)
            {
                h=h+a;
                count++;
            }
            else
                break;
        }
        printf("%lld\n",count);
    }

    return 0;
}
