#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef vector<long long> vi;
const int MX = 1e18;
typedef vector<long double> vd;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;
#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i,a,b) for (int i = (b) - 1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a) - 1; i >= 0; i--)
#define REP(i, a, b) for(int i = a; i <= (b); ++i)
#define trav(a,x) for(auto& a : x)
 
#define sz(x) (int)(x).size()
typedef long double ld;
typedef complex<ld> cd;
 
typedef pair <int, int> pi;
typedef pair<long long, long long> pl;
typedef pair<long double, long double> pd;
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
        cin >> n;
        int a[n], b[n];
        int m1=MX;int m2=MX;
        f(i, 0, n)
        {
            cin >> a[i];
        }
        f(i, 0, n)
        {
            cin >> b[i];
        }
        f(i, 0, n)
        {
           if(a[i]<m1)
           {
               m1=a[i];
           }
           if(b[i]<m2)
           {
               m2=b[i];
           }
        }
        int s1{0}, s2{0}, s3{0};
        f(i, 0, n)
        {
            s1 = a[i] - m1;
            s2 = b[i] - m2;
            s3 += max(s1, s2);
            //cout<<a[i]<<" "<<m1<<endl;
            //cout<<b[i]<<" "<<m2<<endl;
        }

        cout << s3 << endl;
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
