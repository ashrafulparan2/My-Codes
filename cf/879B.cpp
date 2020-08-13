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

    int n, k, a, cnt{0};
    cin >> n >> k;
    vi v;
    f(i, 0, n)
    {
        cin >> a;
        v.pb(a);
    }
    if (k >= n - 1)
    {
        cout << n << endl;
    }
    else
    {

        while (cnt != k)
        {
            if (v[0] > v[1])
            {
                v.pb(v[1]);
                v.erase(v.begin() + 1);
                cnt++;
            }
            else
            {
                v.pb(v[0]);
                v.erase(v.begin());
                cnt = 1;
            }
            if (cnt == k)
            {
                cout << v[0] << endl;
            }
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
