/*
      Ashraful Islam Paran
      10-August-2020
      19:47:28
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

    int n;
    cin >> n;
    int a[n], b[n];
    int ca{0}, cb{0};
    f(i, 0, n)
    {
        cin >> a[i];
    }
    f(i, 0, n)
    {
        cin >> b[i];
    }
    f(i, 0, n)
    {
        if (a[i] == 0 && b[i] == 1)
        {
            cb++;
        }
        if (a[i] == 1 && b[i] == 0)
        {
            ca++;
        }
    }
    //cout << ca << " " << cb;
    if (ca == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        int ans = cb / ca + 1;
        cout << ans << endl;
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}