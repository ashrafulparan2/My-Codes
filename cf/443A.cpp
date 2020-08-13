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

    string a,s;
    set<char> b;
    getline(cin,a);
    //for(int i=1;i<a.size();i+=3)
    f(i,0,a.size())
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            s+=a[i];
        }
        //cout<<a[i]<<endl;
    }
    f(i,0,s.size())
    {
        b.insert(s[i]);
    }

    cout<<b.size()<<endl;
    //cout<<s<<endl;

    return 0;
}
