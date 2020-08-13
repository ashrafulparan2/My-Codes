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

string s;

int sol(int l, int r, char c)
{
    if (l == r)
    {
        return s[l] != c;
    }
    int cnt1{0}, cnt2{0};
    for (int i = l; i <= (l + r) / 2; i++)
    {
        if (s[i] != c)
        {
            cnt1++;
        }
    }

    int ans1 = sol((l + r) / 2 + 1, r, c + 1);

    for (int i = (l + r) / 2 + 1; i <= r; i++)
    {
        if (s[i] != c)
        {
            cnt2++;
        }
    }

    int ans2 = sol(l, (l + r) / 2, c + 1);

    return min(ans1 + cnt1, ans2 + cnt2);
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

    w(t)
    {
        int n, x, y;
        cin >> n >> s;
        cout << sol(0, n - 1, 'a') << endl;
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
