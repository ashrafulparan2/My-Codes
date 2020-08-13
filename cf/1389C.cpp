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
        string s;
        cin>>s;
        map<char,int> mp;
        int n=s.size();
        f(i,0,n)
        {
            mp[s[i]]++;
        }
        vi v;
        int mx=0;
        for(auto it:mp)
        {
            v.pb(it.second);
            if(it.second>mx)
            {
                mx=it.second;
            }
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        int ans{0};
        f(i,0,v.size()-1)
        {
            if(v[i]==v[i+1])
            {
                ans=v[i];
                break;
            }
        }
        int res=max(2*ans,mx);
        cout<<s.size()-mx<<endl;

    }
    
    
    
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
