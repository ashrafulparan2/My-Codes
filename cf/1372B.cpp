#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef vector<int> vi;
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
        int n, m = MX, k, a, b, p, q;
        cin >> n;
        a = n / 2;
        b = n - a;
        while (1)
        {
            k = (a * b) / __gcd(a, b);
            if (k < m)
            {
                m = k;
                p = a, q = b;
            }
            if (a == 1 || m <= (n / 2))
                break;
            a--;
            b++;
        }
        cout << q << " " << p << "\n";
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
