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
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
#else
    // online submission
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, x, cnt{0};
    map<int, int> mp;
    while (1)
    {
        cin >> n >> m;
        if (n == 0 && m == 0)
        {
            break;
        }
        cnt = 0;
        f(i,0,n)
        {
            cin >> x;
            mp[x]++;
        }
        f(i,0,m)
        {
            cin >> x;
            mp[x]++;
        }

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second == 2)
            {
                cnt++;
            }
        }

        mp.clear();
        cout << cnt << endl;
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
