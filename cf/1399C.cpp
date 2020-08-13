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

    long long tc;
    cin >> tc;
    while (tc--)
    {
        set<long long> kk;
        set<long long>::iterator it;
        map<long long, long long> p, q;
        long long n, a[1000], i, j, ii, m = 0, mm = 0, s;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            p[a[i]]++;
            kk.insert(a[i]);
        }
        //cout<<kk[2];

        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            { //1 2 3 4 5 3 4 5 6 5
                m = 0;
                s = a[i] + a[j];
                q = p;

                for (it=kk.begin();it!=kk.end();it++)
                {
                    if (q[*it] > 0 && q[s - *it] > 0 && *it != s - *it)
                    {
                        m += min(q[*it], q[s-*it]);
                        q[*it] = 0;
                        q[s - *it] = 0;
                    }
                    else if (*it == s - *it)
                    {
                        m += q[*it] / 2;
                    }
                }

                //if (m==3){cout<<i<<" "<<j<<endl;}

                mm = max(mm, m);
            }
        }
        cout << mm << endl;
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
