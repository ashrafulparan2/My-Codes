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
        int n,m,p{0};
        cin>>n>>m;
        int a[n][m];
        f(i,0,n)
        {
            f(j,0,m)
            {
                int cnt=4;
                cin>>a[i][j];
                if(i==0||i==(n-1))
                {
                    cnt--;
                }
                if(j==0||j==(m-1))
                {
                    cnt--;
                }
                if(a[i][j]>cnt)
                {
                    p=1;
                }
                a[i][j]=cnt;
            }
        }
        if(!p)
        {
            yes;
            f(i,0,n)
            {
                f(j,0,m)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        else
        {
            no;
        }
    }

    cerr << "Time elapsed: " << 1.0*clock()/CLOCKS_PER_SEC << "s\n";

    return 0;
}
