#include <stdio.h>

int func(int a, int b)
{
    int sum= 0;
    if(a == 1 && b == 1)
    {
        return 1;
    }
    if(a>1)
    {
        sum+= func(a-1,b);
    }
    if(b>1)
    {
        sum+= func(a,b-1);
    }
    return sum;
}

int bye()
{
    int T,r,c;
    scanf("%d",&T);

    for(int i=0; i<T; i++)
    {
        scanf("%d%d",&r,&c);
        int ans=func(r,c);
        printf("%d\n",ans);
    }

    return 0;
}



int main()
{

    bye();

    return 0;
}
