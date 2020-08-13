#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        int a;
        scanf("%d", &a);
        sum += a;
    }
    int ans;
    if(sum%n==0)
    {
        ans = n;
    }
    else
    {
        ans = n-1;
    }
    printf("%d\n", ans);
    return 0;
}
