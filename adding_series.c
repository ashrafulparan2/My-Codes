//1+4+7+.............+n

#include <stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i+=3)
    {
        sum+=i;
    }
    printf("%d\n",sum);
}
