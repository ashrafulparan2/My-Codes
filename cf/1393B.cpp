#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef vector<long long> vi;
const int MX = 2e9 + 5;
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
    
    int fo{0}, tw{0}, si{0}, ei{0};

    int n;
    cin >> n;
    int a[n + 10],i;
    map<int, int> mp;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    int len = n;
    int q;
    for (auto v : mp)
    {
        if (v.second >= 8)
        {
            ei++;
        }
        else if (v.second >= 6)
        {
            si++;
        }
        else if (v.second >= 4)
        {
            fo++;
        }
        else if (v.second >= 2)
        {
            tw++;
        }

        //cout << v.second << endl;
        // cout << fo << " " << tw << endl;
    }
    cin >> q;
    while (q--)
    {
        
        int x;
        char c;
        cin >> c;
        if (c == '+')
        {
            cin >> x;

            if (mp[x] >= 8)
            {
                ei--;
            }
            else if (mp[x] >= 6)
            {
                si--;
            }
            else if (mp[x] >= 4)
            {
                fo--;
            }
            else if (mp[x] >= 2)
            {
                tw--;
            }

            len++;
            mp[x]++;
            if (mp[x] >= 8)
            {
                ei++;
            }
            else if (mp[x] >= 6)
            {
                si++;
            }
            else if (mp[x] >= 4)
            {
                fo++;
            }
            else if (mp[x] >= 2)
            {
                tw++;
            }
            if (len >= 8)
            {
                if (ei >= 1 || si >= 2 || si >= 1 && tw >= 1 || si >= 1 && fo >= 1 || fo >= 2 || fo >= 1 && tw >= 2)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else
            {
                cout << "NO\n";
            }
        }
        else if (c == '-')
        {
            cin >> x;
            if (mp[x] >= 8)
            {
                ei--;
            }
            else if (mp[x] >= 6)
            {
                si--;
            }
            else if (mp[x] >= 4)
            {
                fo--;
            }
            else if (mp[x] >= 2)
            {
                tw--;
            }
            len--;
            mp[x]--;
            if (mp[x] >= 8)
            {
                ei++;
            }
            else if (mp[x] >= 6)
            {
                si++;
            }
            else if (mp[x] >= 4)
            {
                fo++;
            }
            else if (mp[x] >= 2)
            {
                tw++;
            }
            if (len >= 8)
            {
                if (ei >= 1 || si >= 2 || si >= 1 && tw >= 1 || si >= 1 && fo >= 1 || fo >= 2 || fo >= 1 && tw >= 2)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    mp.clear();
    //cout<<mp[1]<<endl;

    
    
    
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
