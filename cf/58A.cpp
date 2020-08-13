/*
      Ashraful Islam Paran
      11-August-2020
      23:37:42
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

    string s;
    cin >> s;
    int l{0}, r{0};
    f(i, 0, s.size())
    {
        if (s[i] == 'h')
        {
            l = i;
            break;
        }
    }
    f(i, 0, s.size())
    {
        if (s[i] == 'o')
        {
            r = i;
        }
    }
    int ec{0}, lc{0};
    for (int i = l; i <= r; i++)
    {
        if (s[i] == 'e')
        {
            ec = 1;
            l = i;
            break;
        }
    }
    for (int i = l; i <= r; i++)
    {
        if (s[i] == 'l')
        {
            lc++;
        }
    }
    //cout << ec << " " << lc << endl;
    if (ec >= 1 && lc >= 2)
    {
        yes;
    }
    else
    {
        no;
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}