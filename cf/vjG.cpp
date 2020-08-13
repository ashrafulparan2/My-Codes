#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef vector<long long> vi;
const int MX = 2e5 + 5;
#define f(i, x, n) for ( i = x; i < n; i++)
#define int long long
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#define pb push_back
#define endl "\n"
#define yes cout << "Yes" << endl
#define no cout << "No" << endl

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
        int i;
        string a;
        stack<char> s;
        cin>>a;
        if(a.size()==0)
        {
            yes;
        }
        else
        {
            f(i,0,a.size())
            {
                if(a[i]=='('||a[i]=='[')
                {
                    s.push(a[i]);
                }
                else if(!s.empty()&&s.top()=='('&&a[i]==')'||s.top()=='['&&a[i]==']')
                {
                    s.pop();
                }
                else if(a[i]==' ')
                {
                    continue;
                }
                else
                {
                    break;
                }
                
            }
            if(s.empty()&&i==a.size())
            {
                yes;
            }
            else
            {
                no;
            }
            
        }
        
    }
    
    
    
   
    return 0;
}
