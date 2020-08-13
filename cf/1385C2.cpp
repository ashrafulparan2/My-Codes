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
        int n;
        int a[MX], k = 0, i, p = 0;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = n - 1; i >= 0; i--)
        {

            if (a[i - 1] < a[i] && p == 0)
            {
                p = 2;
            }

            else if (a[i] < a[i - 1] && p == 2)
            {
                k = i;
                break;
            }
        }
        cout << k << endl;
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
