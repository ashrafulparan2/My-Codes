/*
      Ashraful Islam Paran
      09-August-2020
      20:19:51
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef unsigned long long ull;
typedef vector<long long> vi;
#define ull unsigned long long
const int MX = 2e9 + 5;
#define f(i, x, n) for (int i = x; i < n; i++)
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#define pb push_back
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
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

    w(t)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a < b)
        {
            swap(a, b);
        }
        if (c < d)
        {
            swap(c, d);
        }
        //cout << a << b << c << d;
        if (b + d == a && a == c)
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