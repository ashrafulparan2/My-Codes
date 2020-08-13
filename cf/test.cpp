#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
typedef unsigned long long ull;
typedef vector<int> vi;
const int MX = 2e5 + 5;
#define f(i, x, n) for (int i = x; i < n; i++)
#define pb push_back
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main()
{
#ifndef online_judge
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, x, y, n;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> n;
        ll a = n / x;
        ll res = a * x + y;
        if (res > n)
        {
            cout << res - x << endl;
        }
        else
            cout << res << endl;
    }

    return 0;
}
