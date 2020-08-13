/*Bismillahir Rahmanir Rahim
->>Code by Ashraful Islam Paran
->>CUET,CSE
*/
#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
#define f(a,b,x) for(int a=b;a<x;a++)
#define pb push_back
#define endl "\n"
#define MX INT_MAX
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t,n,x,m,k,l,r,mn{10000},mx{0};
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>m;
        mn=x,mx=x;
        f(i,0,m)
        {
            cin>>l>>r;
            if(l<=mx&&r>=mx)
            {
                mx=max(mx,r);
                mn=min(mn,l);
            }
            else if(l<=mn&&r>=mn)
            {
                mx=max(mx,r);
                mn=min(mn,l);
            }

        }
        cout<<mx-mn+1<<endl;

    }

    return 0;
}
