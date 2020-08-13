#include <stdio.h>
#define max 1000000000
int main()
{
    int i,j,n,a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        for(j=1;j<max;j++)
        {
            if(j<a||j>b)
            {
                if((j%c)==0)
                {
                    printf("%d\n",j);
                    break;
                }
            }
        }
    }
}
