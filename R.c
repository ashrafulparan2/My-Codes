#include <stdio.h>

int max(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int max_of_four(int a, int b, int c, int d)
{
    int p=max(a,b);
    int q=max(p,c);
    int r=max(q,d);
    return r;
}


int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int max=max_of_four(a,b,c,d);
    printf("%d\n",max);
    return 0;
}
