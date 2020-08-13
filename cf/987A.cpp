#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef vector<int> vi;
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
    
    int n,p{0},g=0,b=0,o=0,r=0,y=0;
    cin>>n;
    f(i,0,n)
    {
        string s;
        cin>>s;
        if(s=="red")
        {
            r++;
        }
        if(s=="green")
        {
            g++;
        }
        if(s=="blue")
        {
            b++;
        }
        if(s=="orange")
        {
            o++;
        }
        if(s=="purple")
        {
            p++;
        }
        if(s=="yellow")
        {
            y++;
        }
    }
    cout<<6-n<<endl;

    if(!p)
    {
        cout<<"Power"<<endl;
    }
    if(!g)
    {
        cout<<"Time"<<endl;
    }
    if(!b)
    {
        cout<<"Space"<<endl;
    }
    if(!o)
    {
        cout<<"Soul"<<endl;
    }
    if(!r)
    {
        cout<<"Reality"<<endl;
    }
    if(!y)
    {
        cout<<"Mind"<<endl;
    }
    
    
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
