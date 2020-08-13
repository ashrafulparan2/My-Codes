/*
      Ashraful Islam Paran
      10-August-2020
      15:48:23
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define f(i, x, n) for (int i = x; i < n; i++)
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
typedef unsigned long long ull;
typedef vector<long long> vi;
#define ull unsigned long long
const int MX = 2e5 + 5;
const int INF = 1e18;
#define pb push_back
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(x) x.begin(), x.end()
#define ff first
#define ss second


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
        string s, p;
        cin >> s >> p;
        map<char, int> mp1;
        //cout << p;
        f(i,0,s.size())
        {
            mp1[s[i]]++;
        }
        f(i,0,p.size())
        {
            //mp2[p[i]]++;
            mp1[p[i]]--;
        }
        int cnt{0};
        for(auto v:mp1)
        {
            //cout << v.ff << " " << v.ss << endl;
            cnt++;
            while(v.ss--)
            {
                cout << v.ff;
            }
            if(cnt==1)
            {
                cout << p;
            }
        }
        
        cout << endl;
        //cout << mp1[mp1.end()];
    }
    
    
    
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}