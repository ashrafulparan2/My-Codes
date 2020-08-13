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
        int n, a, b, c, m, x;
        cin >> n >> a >> b >> c >> m;
        //int v = b;
        // cout<<v<<endl;
        vi v,v1;
        f(i, 0, n)
        {
            x = (a * b + c) % m;
            b = x;
            //cout<<v<<endl;
            //cout << x << endl;
            if(x%2)
            {
                v.pb(x);
            }
            else
            {
                v.pop_back();
            }
            auto mn= min_element(v.begin(),v.end());
            auto mx=max_element(v.begin(),v.end());
            auto pp=*mn+*mx;
            v1.pb(pp);
        }
        //cout<<v1.size()<<endl;
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
