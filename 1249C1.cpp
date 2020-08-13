#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
#define pb push_back
#define endl "\n"

int main()
{
    ll q{0},n{0},sum{0},x{0};
    scanf("%lld",&q);
    while(q--)
    {
        scanf("%lld",&n);
        sum=0;
		x=1;
        while(sum<n)
        {
            sum+=x;
            x*=3;
        }

        while(x)
        {

            if(sum-x>=n)
            sum-=x;
            x/=3;
        }
        printf("%lld\n",sum);
    }
}


