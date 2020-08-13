#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef vector<int> vi;
const int MX = 2e5 + 5;
#define f(i, x, n) for (int i = x; i < n; i++)
#define int long long
#define w(t) int t;cin>>t;while(t--)
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
        int x{-1},y{-1},ans{0};
        string s;
        cin>>s;
        f(i,0,s.size())
        {
            if(s[i]!='0')
            {
                x=i;
                break;
            }
        }
        for(int i=s.size()-1;i>0;i--)
        {
            if(s[i]!='0')
            {
                y=i;
                break;
            }
        }

        for(int i=x;i<=y;i++)
        {
            if(s[i]=='0')
            {
                ans++;
            }
        }

        cout<<ans<<endl;
        ans=0;
    }

    return 0;
}
