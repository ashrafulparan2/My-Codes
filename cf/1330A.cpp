/*
      Ashraful Islam Paran
      10-August-2020
      18:46:18
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define f(i, x, n) for (i = x; i < n; i++)
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
        int n, x, a, i, j;
        cin >> n >> x;
        int v[202] = {0};
        f(j, 0, n)
        {
            cin >> a;
            v[a] = 1;
        }
        f(i, 1, 202)
        {
            if (v[i] == 0 && x > 0)
            {
                x--;
            }
            else if (v[i] == 0 && x == 0)
            {
                break;
            }
        }
        cout << i - 1 << endl;
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}