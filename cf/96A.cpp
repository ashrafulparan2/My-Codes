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

    string s;
    cin >> s;
    int cnt{1}, p{0};
    f(i, 0, s.size() - 1)
    {
        if (s[i] == s[i + 1])
        {
            cnt++;
            // cout<<cnt<<endl;
        }
        else
        {
            if (cnt >= 7)
            {
                //cout<<cnt<<endl;
                p = 1;
                break;
            }
            else
            {
                //cout<<cnt<<endl;
                cnt = 1;
            }
        }
    }
    if (cnt >= 7)
    {
        yes;
    }
    else
    {
        no;
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
