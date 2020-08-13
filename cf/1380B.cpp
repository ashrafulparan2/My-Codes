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
    
    int t;
    string a;
    cin>>t;
    while(t--)
    {
        int r{0},s{0},p{0};
        char c;
        cin>>a;
        int n=a.size();
        f(i,0,n)
        {
            if(a[i]=='R')
            {
                r++;
            }
            if(a[i]=='S')
            {
                s++;
            }
            if(a[i]=='P')
            {
                p++;
            }
        }
        int mx=max({r,s,p});
        if(mx==r)
        {
            c='P';
        }
        else if(mx==p)
        {
            c='S';
        }
        else
        {
            c='R';
        }
        
        f(i,0,n)
        {
            cout<<c;
        }
        cout<<endl;
        
    }
    
    
    
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
