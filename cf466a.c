#include <stdio.h>
int main()
{
    int n,m,a,b;
    scanf("%d%d%d%d", &n, &m, &a, &b);
    int ans1=(n/m)*b+(n%m)*a;
    int ans2=((n/m)+1)*b;
    if(ans1<ans2)
        printf("%d\n",ans1);
    else
       printf("%d\n",ans2);

    return 0;
}
