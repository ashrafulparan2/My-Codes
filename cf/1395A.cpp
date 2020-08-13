
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

    long long tc;
    cin >> tc;
    while (tc--)
    {
        long long a[10], i, p = 0, k = 0, k1 = 0;
        for (i = 0; i < 4; i++)
            cin >> a[i];
        for (i = 0; i < 4; i++)
        {
            if (a[i] > 0 || i == 3)
            {
                if (a[i] % 2 == 0)
                    k++;
                else
                    k1++;
            }
            else
                p = 1;
        }
        if (p == 0)
        {
            if (k1 != k)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
        else
        {
            if (k1 > 1) //if a[0]==0 || a[1]==0 || a[]
                cout << "No\n";
            else
                cout << "Yes\n";
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}