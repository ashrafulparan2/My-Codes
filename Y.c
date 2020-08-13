#include <stdio.h>

int oe(int x)
{
    if(x%2)
        return 1;
    else
        return 0;
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        int x=oe(n);
        int y=oe(k);
        if(x==1&&y==1||x==0&&y==0)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }

    return 0;
}
