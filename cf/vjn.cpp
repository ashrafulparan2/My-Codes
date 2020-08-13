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
    int cnt{0};
    w(t)
    {
        cnt++;
        map<string, int> m;
        int a, n;
        string s;
        cin >> n;
        f(i, 0, n)
        {
            cin >> s >> a;
            m[s] = a;
        }
        int d;
        string x;
        cin >> d >> x;
        auto it = m.find(x);
        if (it != m.end())
        {
            for (auto val : m)
            {
                if (val.first == x)
                {
                    if (val.second <= d)
                    {
                        cout << "Case " << cnt << ": "
                             << "Yesss" << endl;
                    }
                    else if (val.second <= (d + 5))
                    {
                        cout << "Case " << cnt << ": "
                             << "Late" << endl;
                    }
                    else
                    {
                        cout << "Case " << cnt << ": "
                             << "Do your own homework!" << endl;
                    }
                }
            }
        }
        else
        {
            cout << "Case " << cnt << ": "
                 << "Do your own homework!" << endl;
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
