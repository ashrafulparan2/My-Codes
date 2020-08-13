#include<stdio.h>
int main()
{
    int n,x,a[100],i,c=0;
    scanf("%d%d",&n,&x);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    //printf("%d\n",a[x]);
    for(i=0; i<n; i++)
    {
        if(a[i]>=a[x-1] && a[i]>0)
        {
            c++;
        }

    }
    printf("%d\n",c);
    return 0;
}

