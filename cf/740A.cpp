/*
      Ashraful Islam Paran
      11-August-2020
      13:07:04
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define f(i, x, n) for (int i = x; i < n; i++)
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
typedef unsigned long long ull;
typedef vector<long long> vi;
#define ull unsigned long long
const int MX = 2e5 + 5;
const int INF = 1e18;
#define pb push_back
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(x) x.begin(), x.end()
#define ff first
#define ss second

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

    int n, a, b, c;
    cin >> n >> a >> b >> c;
    a = min(min(a, b + c), 3 * c);
    b = min(min(2 * a, b), 2 * c);
    c = min(min(3 * a, c), a + b);
    n = n % 4;
    int x = 4 - n;
    if (x == 1)
    {
        cout << a << endl;
    }
    else if (x == 2)
    {
        cout << b << endl;
    }
    else if (x == 3)
    {
        cout << c << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}