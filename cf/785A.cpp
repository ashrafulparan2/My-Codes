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

    int s{0};
    w(t)
    {
        string a;
        cin >> a;
        if (a == "Tetrahedron")
        {
            s += 4;
        }
        if (a == "Cube")
        {
            s += 6;
        }
        if (a == "Octahedron")
        {
            s += 8;
        }
        if (a == "Dodecahedron")
        {
            s += 12;
        }
        if (a == "Icosahedron")
        {
            s += 20;
        }
    }

    cout << s << endl;

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
