#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef vector<int> vi;
const int MX = 2e5 + 5;
#define f(i, x, n) for (int i = x; i < n; i++)
#define int long long
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
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
    
    int n,l,mx=-MX,a;
    cin>>n>>l;
    vector<long long> v;
    f(i,0,n)
    {
        cin>>a;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    f(i,0,n-1)
    {
        if(v[i+1]-v[i]>mx)
        {
            mx=v[i+1]-v[i];
        }
    }
    double y=max(v[0],l-v[n-1]);
    double x=(double)mx/2;

    //cout<<x<<endl;
    //cout<<y<<endl;

    
    double ans=max(x,y);
    cout<<fixed<<setprecision(10)<<ans<<endl;

    
    
    
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
