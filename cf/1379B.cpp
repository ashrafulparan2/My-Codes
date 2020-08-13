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
        int l, r, m, a, b, c, d, i = 0, k, e, l1, u = 0;
        cin >> l >> r >> m;
        k = r - l + 1;
        while (k--)
        {
            l1 = l + i;
            d = m % l1;
            e = l1 - d;
            if (m / l1 == 0)
            {
                u = 1;
                e = l1 - m;
            }
            if (d < e && u == 0)
            {
                if ((r - d) >= l)
                {
                    a = l1;
                    b = r;
                    c = r - d;
                    break;
                }
            }
            else
            {
                if ((r - e) >= l)
                {
                    a = l1;
                    b = r - e;
                    c = r;
                    break;
                }
            }
            i++;
        }
        cout << a << " " << b << " " << c << " \n";
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
