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
    
    int n,k,cnt{0};
    string s;
    cin>>n>>k>>s;
    for(int i=0,j=n-1;i<j;)
    {
        if(s[i]==s[j])
        {
            cnt++;
            i++;
            j--;
        }
        else
        {
            break;
        }
        
    }

    for(int i=0;i<cnt;i++)
    {
        cout<<s[i];
    }
    while(k--)
    {
        for(int i=cnt;i<n;i++)
        {
            cout<<s[i];
        }
    }
    cout<<endl;
    
    
    
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
