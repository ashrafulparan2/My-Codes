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
        char c;
        int x{0};
        cout << p;
        f(i,0,s.size())
        {
            x = 0;
            f(j,0,p.size())
            {
                if(s[i]==p[j])
                {
                    x = 1;
                    p[j] = ' ';
                }
            }
            //cout << c;
            if(!x)
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
    
    
    
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}