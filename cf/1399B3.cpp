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
    
    w(t)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        int mx=MX,m1,m2;
        f(i,0,n)
        {
            cin>>a[i];
            if(a[i]<mx)
            {
                mx=a[i];
                m1=a[i];
            }
        }
        mx=MX;
        f(i,0,n)
        {
            cin>>b[i];
              if(b[i]<mx)
            {
                mx=b[i];
                m2=b[i];
            }
        }
        //cout<<m1<<" "<<m2<<endl;
        vi v1,v2,v3;
        int s1{0},s2{0},s3{0};
        f(i,0,n)
        {
            v1.pb(a[i]-m1);
            s1+=a[i]-m1;
        }
        f(i,0,n)
        {
            v2.pb(b[i]-m2);
            s2+=b[i]-m2;
        }
        f(i,0,n)
        {
            if(v1[i]<v2[i])
            {
                v3.pb(v1[i]);
            }
            else
            {
                v3.pb(v2[i]);
            }
            
        }
        for(auto val:v3)
        {
            s3+=val;
        }
        cout<<s1+s2-s3<<endl;
    }
    
    
    
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
