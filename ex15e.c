#include <stdio.h>
#include <string.h>
int main()
{
    int i, n, k, ans;
    char s[100];

    gets(s);

    if(s[1] == ' ') {
        n = s[0] - '0';
        i = 1;
    } else {
        n=10;
        i=2;
    }
    k=strlen(s)-i-1;
    ans = 1;
    for(i=n;i>0;i-=k)
    {
        ans *= i;
    }
    printf("%d\n", ans);

    return 0;
}
