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
        int n, k, d, a;
        int mn = MX;
        vi v;
        cin >> n >> k >> d;
        set<int> s;
        f(i, 0, n)
        {
            cin >> a;
            v.pb(a);
        }

        f(i, 0, n - d + 1)
        {
            f(j, i, i + d)
            {
                s.insert(v[j]);
            }
            int m = s.size();
            mn = min(m, mn);
            s.clear();
            v.clear();
        }

        cout << mn << endl;
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
