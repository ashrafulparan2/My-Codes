
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define f(i, x, n) for (int i = x; i < n; i++)
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)

#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a)-1; i >= 0; i--)
#define REP(i, a, b) for (int i = a; i <= (b); ++i)
#define trav(a, x) for (auto &a : x)

#define sz(x) (int)(x).size()
typedef long double ld;
typedef complex<ld> cd;

typedef pair<int, int> pi;
typedef pair<long long, long long> pl;
typedef pair<long double, long double> pd;
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

    int n, m, x, y;
    cin >> n >> m >> x >> y;
    cout << x << " " << y << endl;
    int a = x;
    f(i, 1, m + 1)
    {

        if (i != y)
        {
            cout << x << " " << i << endl;
        }
    }
    //x = n;
    // cout << n<<endl;
    n++;
    int cnt{0};
    while (n-- && n > 0)
    {
        if (n != x)
        {
            cnt++;
            if (cnt % 2)
            {
                for (int i = m; i > 0; i--)
                {

                    cout << n << " " << i << endl;
                }
            }
            else
            {
                f(i, 1, m + 1)
                {
                    cout << n << " " << i << endl;
                }
            }
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}