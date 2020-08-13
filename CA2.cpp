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
const int mx=1e9+1;
#define f(i,x,n) for(ll i=x;i<n;i++)
#define pb push_back
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,a[MX],b[MX]={0};
    int ans{1};
    vi v;
    cin>>n;
    f(i,0,n)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    //sort(a,a+n);
    //reverse(a,a+n);
    f(i,0,n)
    {
        if(b[i]>=2)
        {
            v.pb(i);
        }
    }
    if(v.size()<2)
    {
        cout<<"0"<<endl;
    }
    else
    {
        //reverse(v.begin(),v.end());
        cout<<v[0]*v[1]<<endl;

        //cout<<ans<<endl;

    }

    return 0;
}

r

