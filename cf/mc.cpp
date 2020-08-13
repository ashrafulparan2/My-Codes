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
#define yes cout << "Yes" << endl
#define no cout << "No" << endl

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

    int m, n, c=1, k, i, j;
    cin >> m >> n;
    int a[MX];
    for (i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    k = n;
    vector<int> v;
    for (i = 0; i < m - n + 1; i++)
    {
        for (j = i; j < k; j++)
            c = c * a[j];
        v.pb(c);
        k++;
        c = 1;
    }
    f(i, 0, v.size() - 1)
    {
        if (v[i] >= v[i + 1])
        {
            no;
        }
        else
        {
            yes;
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
