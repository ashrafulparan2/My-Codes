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

    int n,c;
    cin>>n>>c;
    int t[n],cnt{0};
    f(i,0,n)
    {
        cin>>t[i];
    }

    f(i,1,n)
    {
        if((t[i]-t[i-1])<=c)
        {
            cnt++;
        }
        else
        {
            cnt=0;
        }
        
    }
    cout<<cnt+1<<endl;


    return 0;
}