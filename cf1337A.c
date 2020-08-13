#include<stdio.h>
main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        long long int a,b,c,d,x,y,z;
        scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
        x=b;
        y=c;
        z=c;
        if(x+y>z && y+z>x && x+z>y)
            printf("%lld %lld %lld\n",x,y,z);

    }
    return 0;
}
