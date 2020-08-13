#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef vector<long long> vi;
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
    
    w(t)
    {
        int n,ans{0},i;
        cin>>n;
        int a[n];
        f(i,0,n)
        {
            cin>>a[i];
        }
        for(i=n-2;i>=0;i--)
        {
            if(a[i]>=a[i+1])
            {
                ans++;
            }
            else
            {
                break;
            }
            
        }
        for(i;i>=0;i--)
        {
            if(a[i]<=a[i+1])
            {
                ans++;
            }
            else
            {
                break;
            }
            
        }
        cout<<n-ans-1<<endl;

    }
    
    
    
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
