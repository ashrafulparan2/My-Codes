/*
      Ashraful Islam Paran
      11-August-2020
      21:28:45
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

    w(t)
    {
        int n, s, k;
        cin >> n >> s >> k;
        int a;
        map<int, int> m;
        f(i, 0, k)
        {
            cin >> a;
            m[a]++;
        }
        int pos = s;
        int x{0}, y{0};
        while (1)
        {
            if (m[pos] == 0)
            {
                break;
            }
            else
            {
                x++;
                pos++;
                if (pos > n)
                {
                    x = INF;
                    break;
                }
            }
        }
        pos = s;
        while (1)
        {
            if (m[pos] == 0)
            {
                break;
            }
            else
            {
                y++;
                pos--;
                if (pos == 0)
                {
                    y = INF;
                    break;
                }
            }
        }
        //cout << x << " " << y << endl;
        cout << min(x, y) << endl;
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}