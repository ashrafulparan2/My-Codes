#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

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
#define yes cout << "First" << endl
#define no cout << "Second" << endl

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

    int b[100001], ar[100001], c, d, e, f, m, n, p, x, y, z, t, i, j, k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int r = 0, count = 0, p = 0;
        for (i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (r == 0)
            {
                if (ar[i] == 1)
                    count++;
                else
                    r = 1;
            }
            if (ar[i] != 1)
                p = 1;
        }
        if (count % 2 == 0)
        {
            if (p == 1)
                cout << "First" << endl;
            else
                cout << "Second" << endl;
        }
        else
        {
            if (p == 1)
                cout << "Second" << endl;
            else
                cout << "First" << endl;
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
