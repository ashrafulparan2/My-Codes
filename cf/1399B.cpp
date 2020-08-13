#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef vector<long long> vi;
const int MX = 9e7 + 5;
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
    int tc,n,p,q,i,a,b;

    cin >> tc;
    while (tc--)
    {
        cin >> n;
        int cnt = 0;
        int ara[n];
        int ara1[n];
        for (i = 0; i < n; i++)
        {
            cin >> ara[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> ara1[i];
        }
        p = *min_element(ara,ara+ n);
        q = *min_element(ara1,+ara1+n);
        for (i = 0; i < n; i++)
        {
            a = ara[i] - p;
            b = ara1[i] - q;
            cnt += max(a, b);
        }
        cout << cnt << endl;
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
