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
#define yes cout << "Y" << endl
#define no cout << "N" << endl

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
        int n, ca{0}, cb{0};
        string s;
        cin >> n >> s;
        f(i, 0, s.size())
        {
            if (s[i] == 'A')
            {
                ca++;
            }
            else
            {
                cb++;
            }
        }
        cout << "Case #" << cnt << ": ";
        if (ca >= n / 2 && cb >= n / 2)
        {
            yes;
        }
        else
        {
            no;
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
