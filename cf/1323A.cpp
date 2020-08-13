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
        int n, x{0}, y{0}, z{0};
        cin >> n;
        int a;
        f(i, 1, n + 1)
        {
            cin >> a;
            if (a % 2 && x == 0)
            {
                x = i;
            }
            else if (a % 2 && x)
            {
                y = i;
            }
            if (a % 2 == 0)
            {
                z = i;
            }
        }
        if (z)
        {
            cout << "1" << endl
                 << z << endl;
        }
        else if (x && y && x != y)
        {
            cout << "2" << endl
                 << x << " " << y << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
