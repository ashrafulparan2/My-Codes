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
#define yes cout << "YES" \
                 << " "
#define no cout << "NO" \
                << " "

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
        int a, b, c, m, p;
        cin >> a >> b >> c >> m >> p;
        int x = pow(a, b);
        int y = pow(x, c);
        int r = y % m;
        int ans = r * p;
        if (ans > 0)
        {
            yes;
            cout << ans % 100000007 << endl;
        }
        else
        {
            no;
            cout << ans % 100000007 << endl;
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
