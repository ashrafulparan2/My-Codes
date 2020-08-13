#include <stdio.h>
int main()
{
    int T,a,b,c;
    scanf("%d", &T);
    for(int i=0;i<T;i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        if((a*a==b*b+c*c)||(b*b==c*c+a*a)||(c*c==a*a+b*b))
        {
            printf("Case %d: yes\n", i+1);
        }
        else
        {
            printf("Case %d: no\n", i+1);
        }
    }

    return 0;
}
