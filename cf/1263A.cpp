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

    int n,a[3];
    w(t)
    {
        int s{0};
        f(i,0,3)
        {
            cin>>a[i];
            s+=a[i];
        }
        sort(a,a+3);
        cout<<min(s/2,a[0]+a[1])<<endl;
        //cout<<(s/2)<<endl;
        //cout<<a[0]+a[1]<<endl;
    }

    return 0;
}
