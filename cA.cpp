/*Bismillahir Rahmanir Rahim
->>Code by Ashraful Islam Paran
->>CUET,CSE
*/
#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
typedef unsigned long long ull;
typedef vector<int> vi;
const int MX=2e5+5;
#define f(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,a[MX];
    int ans{1},cnt{0};
    vi v;
    set<int> m;
    cin>>n;
    f(i,0,n)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);
    //reverse(a,a+n);
    f(i,0,n-1)
    {
        if(a[i]==a[i+1])
        {
            //v.pb(a[i]);
            m.insert(a[i]);
        }
    }
    if(m.size()<2)
    {
        cout<<"0"<<endl;
    }
    else
    {
        //reverse(m.begin(),m.end());
        //cout<<m.at(1)<<endl;
        for (auto it=m.begin(); it != m.end(); ++it)
        {
            cnt++;

            ans=ans* *it;
            cout<<ans<<endl;
            if(cnt==2)
                break;
        }

        cout<<ans<<endl;

    }

    return 0;
}

