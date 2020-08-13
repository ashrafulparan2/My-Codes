#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define vi vector<int>
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

template <typename t>
void print(vector<t> &l)
{
    for (auto x : l)
    {
        cout << x << " ";
    }
    cout << endl;
}

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

    int t, m, n, a[MX], b, c, d, j, k;
    cin >> t;

    vi a;
    vector<int> v;
    while (t--)
    {
        c = 0;
        cin >> m;
        for (int i = 0; i < 2 * m; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < 2 * m; i++)
        {
            if (a[i] != a[i + 1])
            {
                for (j = 0; j < v.size(); j++)
                {
                    if (a[i] != v[j])
                        c++;
                }
                if (c == v.size())
                    v.push_back(a[i]);
                c = 0;
            }
        }
        for (j = 0; j < v.size(); j++)
        {
            if (a[2 * m - 1] != v[j])
                c++;
        }
        if (c == v.size())
            v.push_back(a[(2 * m) - 1]);
        for (auto elem : v)
        {
            cout << elem << " ";
        }
        cout << endl;
        v.clear();
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
