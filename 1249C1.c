#include <bits/stdc++.h>
using namespace std;
long long t,n,sum,x;
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        sum=0;
		x=1;
        while(sum<n)
        {
            sum+=x;
            x*=3;
        }
        cout<<sum<<endl;
        cout<<x<<endl;
        while(x)
        {
            if(sum-x>=n) sum-=x;
            x/=3;
        }
        printf("%lld\n",sum);
    }
}

