/*
      Ashraful Islam Paran
      13-August-2020
      22:28:19
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define f(i, x, n) for (int i = x; i < n; i++)
#define fb(i, x, n) for (int i = n - 1; i >= 0; i--)
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)

typedef unsigned long long ull;
typedef vector<long long> vi;
#define ull unsigned long long
#define msi map<string, long long>
#define mii map<long long, long long>
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

    int n;
    cin >> n;
    int a, o{0}, t{0}, th{0};
    vi v[4];
    
    f(i, 0, n)
    {
        cin >> a;
        v[a].pb(i + 1);
    }
    int x = min({v[1].size(), v[2].size(), v[3].size()});
    cout << x << endl;
    f(i, 0, x)
    {
        cout << v[1][i] << " " << v[2][i] << " " << v[3][i] << endl;
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}