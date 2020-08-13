#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef vector<long long> vi;
const int MX = 2e9 + 5;
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
        int n, p{0}, q{0};
        cin >> n;
        int a[n];
        f(i, 0, n)
        {
            cin >> a[i];
            if (a[i] % 2)
            {
                p++;
            }
            if (a[i] % 2 == 0)
            {
                q++;
            }
        }
        int sum = accumulate(a, a + n, 0);

        if (sum % 2 || p >= 1 && q >= 1)
        {
            yes;
        }
        else
        {
            no;
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
