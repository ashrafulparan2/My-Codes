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
    
    w(t)
    {
        int n,k,z;
        cin>>n>>k>>z;
        int a[n];
        f(i,0,n)
        {
            cin>>a[i];
        }
        int s{0},cnt{0},p{0},q{0};
        s+=a[0];
        f(i,0,n-1)
        {
            if(a[i]<a[i+1])
            {
                s+=a[i+1];
                cnt++;
                p=0;
                q=0;
            }
            else
            {
                cnt++;
                /* code */
                if(z>0&&p!=1&&q!=1)
                {
                    //cout<<p<<endl;
                    p=1;
                    s+=a[i+1];
                    i-=2;
                    z--;
                    q++;
                    
                    
                }
                else
                {
                    s+=a[i+1];
                }
                
            }
           // cout<<s<<endl;
            if(cnt>=k)
            {
                break;
            }
            
        }
        int sum{0};
        sum+=a[0];
        f(i,0,n-1)
        {
            if(a[i]<a[i+1])
            {
                sum+=a[i+1];
                cnt++;
                p=0;
            }
            else
            {
                cnt++;
                /* code */
                if(z>0&&p!=1&&q!=1)
                {
                    //cout<<p<<endl;
                    //p=1;
                    sum+=a[i+1];
                    //i-=2;
                    //z--;
                    //q++;
                    
                    
                }
                else
                {
                    sum+=a[i+1];
                }
                
            }
           // cout<<sum<<endl;
            if(cnt>=k)
            {
                break;
            }
            
        }
        //cout<<s<<endl;
    }
    
    
    
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
