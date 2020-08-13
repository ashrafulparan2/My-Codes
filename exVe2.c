#include<stdio.h>
int main()
{
    int t,n,k,d[1000],h,l,j,sum,m,i,r=0;
    scanf("%d",&t);
    while(r<t)
    {
        r++;
        scanf("%d%d",&n,&k);
        n++;
        k++;
        h=0;
        l=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&d[i]);
            h=h+d[i];
        }
        while(h>=l)
        {
            m=(h+l)/2;
            for(i=0,j=0; i<k; i++)
            {
                sum=0;
                for(; j<n; j++)
                {
                    if(sum+d[j]>m)
                        break;
                    sum=sum+d[j];
                    printf("\n%d\n",sum);
                }

            }
            if(j<n)
                l=m+1;
            else
                h=m-1;
        }
        printf("Case %d: %d\n",r,l);
        for(i=k,j=0; i>0; i--)
        {
            sum=0;
            for(; n-j >= i; j++)
            {
                if(sum+d[j]>l)
                    break;
                sum=sum+d[j];
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
