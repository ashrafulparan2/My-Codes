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

    int a, b, c, d, e, f, g, h, p;

    scanf("%lld:%lld", &a, &b);
    scanf("%lld:%lld", &c, &d);
    

    if (a == 0)
    {
        a = 24;
    }
    e = (a * 60) + b;
    f = (c * 60) + d;
    p = e - f;
    if (p < 0)
        p = 1440 + p;
    g = p / 60;
    h = p % 60;
    if (g >= 0 && g <= 9)
        cout << "0" << g << ":";
    else if (g == 24)
        cout << "00:";
    else
        cout << g << ":";
    if (h >= 0 && h <= 9)
        cout << "0" << h;
    else
        cout << h;
    return 0;
}
