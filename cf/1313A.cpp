/*
      Ashraful Islam Paran
      11-August-2020
      12:15:26
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
        int a[3];
        f(i, 0, 3)
        {
            cin >> a[i];
        }
        sort(a, a + 3);
        int cnt{0};
        if (a[2])
        {
            cnt++;
            a[2]--;
        }
        if (a[1])
        {
            cnt++;
            a[1]--;
        }
        if (a[0])
        {
            cnt++;
            a[0]--;
        }
        if (a[2] && a[1])
        {
            cnt++;
            a[2]--;
            a[1]--;
        }
        if (a[2] && a[0])
        {
            cnt++;
            a[2]--;
            a[0]--;
        }
        if (a[1] && a[0])
        {
            cnt++;
            a[1]--;
            a[0]--;
        }
        if (a[2] && a[1] && a[0])
        {
            cnt++;
        }
        cout << cnt << endl;
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}