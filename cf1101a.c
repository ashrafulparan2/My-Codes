#include <stdio.h>
int main()
{
    int i,j,n,a,b,c;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(c<a)
        {
            printf("%d\n",c);
        }
        else
        {
            int d=((b/c)+1)*c;
            printf("%d\n",d);
        }
    }
}
