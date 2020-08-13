#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef vector<int> vi;
const int MX = 2e5 + 5;
#define f(i, x, n) for (int i = x; i < n; i++)
#define int long long
#define w(t) int t;cin>>t;while(t--)
#define pb push_back
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
    // online submission
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x,y,a,b;
    w(t)
    {
        int ans;
        cin>>x>>y>>a>>b;
        if((y-x)%(a+b))
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<(y-x)/(a+b)<<endl;
        }

    }

    return 0;
}
