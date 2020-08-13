#include <stdio.h>
#include <string.h>

int main()
{
    char a[10000];
    gets(a);
    int ans = 1;
    int n = strlen(a);

    for(int i=n;i>0;i-=2)
    {
        ans *= i;
    }
    printf("%d\n",ans);
}
