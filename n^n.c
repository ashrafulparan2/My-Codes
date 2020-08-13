#include <stdio.h>

int pow(int x, int y)
{
    int result = 1;
    for(int i=1;i<=y;i++)
    {
        result*=x;
    }

    return result;
}

int main()
{
    int a,b,ans;
    scanf("%d%d", &a, &b);
    ans = pow(a,b);
    printf("%d",ans);

}

