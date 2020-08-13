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
#define MX 200000
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,sum{0},sum2{0},ans;
    cin>>n;
    ll a[n],b[n];
    if(n==1)
    {
        int x;
        cin>>x;
        cout<<x*x<<endl;
    }
    else
    {
        f(i,0,n)
        {
            cin>>a[i];
            sum+=a[i]*a[i];
        }
        f(i,0,n-1)
        {
            b[i]=a[i]&a[i+1];
            b[i+1]=a[i]|a[i+1];
            f(i,0,n)
            {
                sum2+=b[i]*b[i];
                //cout<<b[i]<<endl;
            }
            ans=max(sum,sum2);
            cout<<sum2<<endl;
        }

        //cout<<sum<<" "<<sum2<<endl;
        cout<<ans<<endl;
    }

    return 0;
}
