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

    w(t)
    {
        int n;
        cin >> n;
        int a[n];
        vi v;
        set<int> s;
        f(i, 0, n)
        {
            cin >> a[i];
        }
        f(i, 0, n)
        {
            f(j, 0, n)
            {
                v.pb(a[i] | a[j]);
            }
        }
        for (auto x : v)
        {
            //cout<<x<<endl;
            s.insert(x);
        }
        //cout<<s.size()<<endl;

        if (s.size() == (n * n - ((n - 2) * 2 + 1)))
        {
            yes;
        }
        else
        {
            no;
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
