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

    string s;
    w(t)
    {
        cin>>s;
        int x=s.size()-1;
        if((s[x]=='h'&&s[x-1]=='c')||s[x]=='x'||s[x]=='s'||s[x]=='o')
        {
            cout<<s<<"es"<<endl;
        }
        else if(s[x]=='f')
        {
            cout<<s.substr(0,x)<<"ves"<<endl;
        }
        else if(s[x]=='e'&&s[x-1]=='f')
        {
            cout<<s.substr(0,x-1)<<"ves"<<endl;
        }
        else if(s[x]=='y')
        {
            cout<<s.substr(0,x)<<"ies"<<endl;
        }
        else
        {
            cout<<s<<"s"<<endl;
        }
        
    }

    return 0;
}
