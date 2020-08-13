/*
      Ashraful Islam Paran
      09-August-2020
      23:10:37
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
typedef vector<long double> vd;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;
#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i,a,b) for (int i = (b) - 1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a) - 1; i >= 0; i--)
#define REP(i, a, b) for(int i = a; i <= (b); ++i)
#define trav(a,x) for(auto& a : x)
 
#define sz(x) (int)(x).size()
typedef long double ld;
typedef complex<ld> cd;
 
typedef pair <int, int> pi;
typedef pair<long long, long long> pl;
typedef pair<long double, long double> pd;
#define no cout << "NO" << endl
#define all(x) x.begin(), x.end()
#define ff first
#define ss second
const int mod = 1e9 + 7;

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
    int p = 1, fact = 1;
    f(i, 1, n + 1)
    {
        fact = (fact * i) % mod;
        if (i != 1)
            p = (p * 2) % mod;
    }
    int ans = fact - p + mod;
    cout << ans % mod << endl;

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}