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

    int n;
    cin >> n;
    int a[n], cnt{0}, ans{0}, j{0};

    f(i, 0, n)
    {
        cin >> a[i];
    }
    f(i, 0, n)
    {
        if (a[i] == 1)
        {
            cnt++;
            if (cnt == 1)
            {
                ans = 1;
            }
            else
            {
                ans *= i - j;
            }
            
            j = i;
        }
    }
    cout << ans << endl;

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
