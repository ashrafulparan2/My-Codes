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
#define yes cout << "Yes" << endl
#define no cout << "No" << endl

int32_t main()
{
#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#else
    // online submission
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    w(t)
    {
        int p = 0;
        string s;
        cin >> s;
        f(i, 0, s.size())
        {
            if (s[i] == 'i')
            {
                p = 1;
            }
            if (s[i] == 'a')
            {
                p = 1;
            }
            if (s[i] == 'e')
            {
                p = 1;
            }
            if (s[i] == 'o')
            {
                p = 1;
            }
            if (s[i] == 'u')
            {
                p = 1;
            }
        }
        if (p)
        {
            yes;
        }
        else
            no;
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
