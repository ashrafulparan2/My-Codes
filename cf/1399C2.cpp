#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef vector<long long> vi;
const int MX = 2e9 + 5;
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
        int n, ans{0};
        cin >> n;
        int a[n];
        f(i, 0, n)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        f(k, 1, 2 * n + 1)
        {
            int cnt{0};
            for (int i = 0, j = n - 1; i < j;)
            {
                if (a[i] + a[j] > k)
                {
                    j--;
                }
                else if (a[i] + a[j] < k)
                {
                    i++;
                }
                else
                {
                    cnt++;
                    i++;
                    j--;
                }
            }
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}