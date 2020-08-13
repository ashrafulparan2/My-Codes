#include <stdio.h>
int main()
{
    int t,n,k,l=0,r=0,sum1=0,sum2,a[1001],av,i,j;
    scanf("%d",&t);
    while(r<t)
    {
        r++;
        scanf("%d%d",&n,&k);
        n++;
        k++;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            sum1+=a[i];
        }
        while(sum1>=1)
        {
            av=(sum1+1)/2;
            for(i=1,j=0; i<=k; i++)
            {
                sum2=0;
                for(; j<n; j++)
                {
                    if((sum2+a[j])>av)
                    {
                        break;
                    }
                    sum2+=a[j];
                }
            }
            if(j<n)
            {
                l=av+1;
            }
            else
            {
                sum1=av-1;
            }
        }
        printf("Case %d: %d\n",r,l);
        for(i=k,j=0; i>0; i--)
        {
            sum2=0;
            for(; n-j>=i; j++)
            {
                if(sum2+a[j]>l)
                {
                    break;
                }
                sum2+=a[j];
            }
            printf("%d\n",sum2);
        }
    }
}
