/*
      Ashraful Islam Paran
      12-August-2020
      11:00:48
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
    int n = s.size();
    int cnt{0};
    if (isupper(s[0]))
    {
        f(i, 1, s.size())
        {
            if (isupper(s[i]))
            {
                cnt++;
            }
        }
        if (cnt >= n - 1)
        {
            f(i, 0, n)
            {
                cout << char(tolower(s[i]));
            }
            cout << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    if (islower(s[0]))
    {
        f(i, 1, s.size())
        {
            if (isupper(s[i]))
            {
                cnt++;
            }
        }
        if (cnt >= n - 1)
        {
            cout << char(toupper(s[0]));
            f(i, 1, n)
            {
                cout << char(tolower(s[i]));
            }
            cout << endl;
        }
        else
        {
            cout << s << endl;
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}