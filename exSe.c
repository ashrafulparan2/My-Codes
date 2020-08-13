#include<stdio.h>
int main()
{
    long long t,h,p,a,x,j=1,count=0;
    scanf("%lld",&t);
    while(t--)
    {
        j=1,count=0;
        scanf("%lld%lld%lld",&h,&p,&a);
        while(h!=0)
        {

            x=j*p;
            j++;
            h-=x;
            count++;
            if(h>0)
            {
                h+=a;
                count++;
            }
            else
                break;
        }
        printf("%lld\n",count);
    }
}
