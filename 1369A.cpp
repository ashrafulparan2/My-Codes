
#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%4)
        {
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;
    }

    return 0;
}

