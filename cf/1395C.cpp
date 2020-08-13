/*
      Ashraful Islam Paran
      12-August-2020
      21:37:51
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

    int n, m;
    cin >> n >> m;
    int a[n], b[m],c[m];
    vi v;
    f(i,0,n)
    {
        cin >> a[i];
    }
    f(i,0,m)
    {
        cin >> b[i];
        int x=__builtin_popcountll(b[i]);
        v.pb(x);
    }
    int mn = INF,mn2=INF;
    int pos,pos2;
    f(i,0,m)
    {
        if(v[i]<mn)
        {
            mn = v[i];
            pos = i;
        }
    }
    f(i,0,m)
    {
        if(v[i]<mn2&&i!=pos)
        {
            mn2 = v[i];
            pos2 = i;
        }
    }
    vi ans;

    int asum{0};
    cout << b[pos];
    for (int i = 0, j = 0; i < n;i++,j++)
    {
        //if(j!=pos)
        //{
            ans.pb( a[i] & b[pos]);
       // }
        //if(j==pos)
        /*{
            ans.pb( a[i] & b[pos2]);
        }*/
        
    }
    int esum{0};
    for (int i = 0; i < n;i+=2)
    {
        asum = ans[i] | ans[i + 1];
        //cout << asum << endl;
        //cout << ans[i] << endl;
        esum += asum;
    }
    for(auto val :ans)
    {
        //cout << val << endl;
    }
    //cout << esum << endl;



    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}