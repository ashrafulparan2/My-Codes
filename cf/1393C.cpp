#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef vector<long long> vi;
const int MX = 2e9 + 5;
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
        int n;
        cin >> n;
        int a[n];
        map<int, int> mp;
        f(i, 0, n)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        int mx=0;
        for(auto v:mp)
        {
            if(v.second>mx)   
            {
                mx=v.second;
            }
        }
        //cout<<mx<<endl;
        //auto max=*max_element(mp.begin(),mp.end());
        //cout<<*max<<endl;
       // cout<<((n-1)/(mx-1))-1<<endl;
        //cout<<n/mx<<endl;
        
       // cout<<mx<<" "<<mp.count(mx)<<endl;
       int cnt{0};
       for(auto v:mp)
        {
            //cout<<v.second<<" ";
            if(v.second==mx)
            {
                cnt++;
            }
        }
        //cout<<cnt<<endl;
        cout<<((n-cnt)/(mx-1))-1<<endl;
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
