/*
      Ashraful Islam Paran
      11-August-2020
      21:58:14
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
    string s, k;
    vector<string> v, w;
    f(i, 0, n)
    {
        cin >> s;
        v.pb(s);
    }
    f(i, 0, m)
    {
        cin >> k;
        w.pb(k);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int r1 = x % n;
        int r2 = x % m;
        if (r1 == 0)
        {
            r1 = n;
        }
        if (r2 == 0)
        {
            r2 = m;
        }
        cout << v[r1 - 1] << w[r2 - 1] << endl;
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}