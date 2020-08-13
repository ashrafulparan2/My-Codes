#include <stdio.h>
int main()
{
    int a,b,c,d,x,y;
    while(1)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a==0&&b==0&&c==0&&d==0)
        {
            break;
        }
        if(a==0)
        {
            x=24*60+b;
        }
        else
        {
            x=a*60+b;
        }
        if(c==0)
        {
            y=24*60+d;
        }
        else
        {
            y=c*60+d;
        }
        if(y>x)
        {
            printf("%d\n",y-x);
        }
        else
        {
            printf("%d\n",24*60+y-x);
        }
    }
}
