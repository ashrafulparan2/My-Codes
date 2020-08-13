#include <stdio.h>
int main()
{
    long long t;
    scanf("%lldd", &t);
    for(int i=0; i<t; i++)
    {
        long long  a, b, c, d, A, B, C, D,x,y,x1,y1,x2,y2;
        scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
        scanf("%lld%lld%lld%lld%lld%lld", &x, &y, &x1, &y1, &x2, &y2);

        if(a-b>=0)
        {
            A = x-(a-b);
            B = x+(a-b);
        }
        else
        {
            A = x-(b-a);
            B = x+(b-a);
        }
        if(c-d>=0)
        {
            C = y-(c-d);
            D = y+(c-d);
        }
        else
        {
            C = y-(d-c);
            D = y+(d-c);
        }
        //if((a==b)&&(b==x)&&(c==y)&&(c==d))
        if(x==x1&&x==x2&&y==y1&&y==y2)
        {
            printf("No\n");
        }
        else if(a-b==0||c-d==0)
        {
            if(x1-x2==0&&y1-y2==0)
                printf("No\n");
            else
                printf("Yes\n");
        }
        else if(A<x1||B>x2||C<y1||D>y2)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }

    }
}
