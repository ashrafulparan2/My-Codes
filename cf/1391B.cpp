/*
      Ashraful Islam Paran
      09-August-2020
      20:59:18
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef unsigned long long ull;
typedef vector<long long> vi;
#define ull unsigned long long
const int MX = 2e9 + 5;
#define f(i, x, n) for (int i = x; i < n; i++)
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#define pb push_back
#define endl "\n"
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
        int n, m,cnt{0};
        cin >> n >> m;
        char a[n][m];
        f(i,0,n)
        {
            f(j,0,m)
            {
                cin >> a[i][j];
            }
        }
        f(i,0,n)
        {
            if(a[i][m-1]=='R')
            {
                cnt++;
            }
        }
        f(i,0,m)
        {
            if(a[n-1][i]=='D')
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    
    
    
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}