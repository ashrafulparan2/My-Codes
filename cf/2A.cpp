/*
      Ashraful Islam Paran
      13-August-2020
      13:17:05
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define f(i, x, n) for (int i = x; i < n; i++)





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
    
    int n;
    cin >> n;
    int a[n];
    string s[n];

    map<string, int> x, y;
    f(i, 0, n)
    {
        cin >> s[i] >> a[i];
        x[s[i]] += a[i];
    }
    int mx = 0;
    f(i, 0, n)
    {
        mx = max(mx, x[s[i]]);
    }
    f(i, 0, n)
    {
        y[s[i]] += a[i];
        if (y[s[i]] >= mx && x[s[i]] == mx)
        {
            cout << s[i] << endl;
            break;
        }
    }
    
    
    
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}