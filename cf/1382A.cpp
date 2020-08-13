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
        int n, m, x, y, p{0};
        cin >> n >> m;
        set<int> a, b;
        f(i, 0, n)
        {
            cin >> x;
            a.insert(x);
        }
        f(i, 0, m)
        {
            cin >> y;
            b.insert(y);
        }
        vi c, d;
        map<int, int> m1;
        for (auto it : a)
        {
            c.pb(it);
            //cout<<it<<endl;
            m1[it]++;
        }
        for (auto it1 : b)
        {
            c.pb(it1);
            m1[it1]++;
        }
        int ans;
        for (auto it : m1)
        {
            if (it.second >= 2)
            {
                p = 1;
                ans = it.first;
                //break;
            }
        }
        if (!p)
        {
            no;
        }
        else
        {
            yes;
            cout << "1"
                 << " " << ans << endl;
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
