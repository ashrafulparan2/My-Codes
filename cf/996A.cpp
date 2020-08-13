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

    int n, cnt{0};
    cin >> n;
    while (n != 0)
    {
        if (n >= 100)
        {
            n -= 100;
            cnt++;
        }
        else if (n >= 20)
        {
            n -= 20;
            cnt++;
        }
        else if (n >= 10)
        {
            n -= 10;
            cnt++;
        }
        else if (n >= 5)
        {
            n -= 5;
            cnt++;
        }
        else if (n >= 1)
        {
            n -= 1;
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}
