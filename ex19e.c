#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    long long count1 = 0, count0 = 0, n1 = 0, n0 = 0;
    scanf("%d", &n);
    char a[100001];
    char b[100001];
    scanf("%s", a);
    scanf("%s", b);
    for(int i=0;i<=n;i++)
    {
        if(b[i]=='0')
        {
            if(a[i]=='0')
            {
                count0++;
            }
            else if(a[i]=='1')
            {
                count1++;
            }
        }
        else if(b[i]=='1')
        {
            if(a[i]=='0')
            {
                n0++;
            }
            else if(a[i]=='1')
            {
                n1++;
            }
        }
    }
    long long ans =  count0*n1 + count1*n0 + count0*count1;
    printf("%lld\n",ans);

    return 0;
}
