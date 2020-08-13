#include <stdio.h>
int main()
{
    int t;
    long long count=0,total=1;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        count=0,total=1;
        scanf("%d",&n);
        printf("Case %d:\n",i+1);
        printf("Day = 1, New = 0, Total = 1\n");
        for(int j=1;j<n;j++)
        {
            count=total*2;
            total+=count;
            printf("Day = %d, New = %lld, Total = %lld\n",j+1,count,total);
        }

    }

    return 0;
}
