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
#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#else
    // online submission
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, n, di, r, s;

    double p, q, d, x, m = 1;
    cin >> t;
    while (t--)
    {
        int sum{0};
        cin >> n >> p >> q;
        d = p / q;
        di = d;
        x = d - di;
        while (n--)
        {
            m *= 10;
        }
        x *= m;

        ll y = x;

        ll a, b;

        while (n--)
        {
            a = x / m;
            sum += a;
            x = x - a * m;
            m /= 10;
        }

        cout << sum << endl;
        cout << y << endl;
    }

    return 0;
}
