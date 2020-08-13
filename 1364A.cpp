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

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,a[100000],sum=0,p=-1,q=-1,sum1=0,i;
        cin>>n>>x;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sum1=sum;
        for(i=0; i<n; i++)
        {
            if (sum%x==0)
                sum-=a[i];
            else
            {
                p=n-i;
                break;
            }
        }
        for(i=n-1; i>=0; i--)
        {
            if (sum1%x==0)
            {
                sum1-=a[i];
            }

            else
            {
                q=i+1;
                break;
            }
        }
        if (p==-1 && q==-1)
            cout<<"-1\n";
        else
            cout<<max(p,q)<<"\n";
    }
    return 0;
}
