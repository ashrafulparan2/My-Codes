#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef vector<long long> vi;
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

    int x;
    cin >> x;
    if (x >= 400 && x < 600)
    {
        cout << "8" << endl;
    }
    else if (x >= 600 && x < 800)
    {
        cout << "7" << endl;
    }
    else if (x >= 800 && x < 1000)
    {
        cout << "6" << endl;
    }
    else if (x >= 1000 && x < 1200)
    {
        cout << "5" << endl;
    }
    else if (x >= 1200 && x < 1400)
    {
        cout << "4" << endl;
    }
    else if (x >= 1400 && x < 1600)
    {
        cout << "3" << endl;
    }
    else if (x >= 1600 && x < 1800)
    {
        cout << "2" << endl;
    }
    else if (x >= 1800 && x < 2000)
    {
        cout << "1" << endl;
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
