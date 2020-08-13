#include <stdio.h>

int a[100];
int n;
int t;
int sum(int b[],int x)
{
    if(x<=0)
        return 0;
    return sum(b,x)+b[x-1];
}

int main()
{

    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(int h=0;h<n;h++)
        {
            scanf("%d",&a[h]);
        }
        printf("%d\n",sum(a,n));
    }
}
