/*
      Ashraful Islam Paran
      12-August-2020
      12:22:38
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
    int a[m];
    int mn = INF;
    f(i, 0, m)
    {
        cin >> a[i];
    }
    sort(a, a + m);
    //cout << a[n - 1] - a[0] << endl;
    f(i, 0, m-n+1)
    {
        int x = abs(a[i + n - 1] - a[i]);
        mn = min(mn, x);
       // cout << a[i] << " ";
    }
    cout << mn << endl;

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}