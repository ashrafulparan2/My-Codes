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

    int t,n;
    vi even,odd;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[MX];
        f(i,1,2*n+1)
        {
            cin>>a[i];
            if(a[i]%2)
            {
                odd.pb(i);
            }
            else
            {
                even.pb(i);
            }
        }
        vector<pair<int,int>> ans;

        for(int i=0;i+1<even.size();i+=2)
        {
            ans.pb({even[i],even[i+1]});
        }
        for(int i=0;i+1<odd.size();i+=2)
        {
            ans.pb({odd[i],odd[i+1]});
        }
        for(int i = 0; i < n - 1; i++)
        {
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }
        odd.clear();
        even.clear();
        ans.clear();
    }

    return 0;
}

