#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
#define pb push_back
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll q{0},n{0};
    cin>>q;
    while(q--)
    {
        ll x=1,sum=0;
        cin>>n;
        while(sum<n)
        {
            sum+=x;
            x*=3;
        }

        while(x)
        {
            if(sum-x>=n)
            {
                sum-=x;
                x/=3;
            }
        }
        //cout<<sum<<endl;
        printf("%lld\n",sum);
    }

    return 0;
}
