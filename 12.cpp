/*Bismillahir Rahmanir Rahim
->>Code by Aimon
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
    long long a[10001],t,m,n;
    cin>>t;
    while(t--)
    {
        int m,n=0,p;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            a[i]=i+1;
        }
        for(int k=0;k<m;k++)
            for(int j=k+1;j<m;j++)
        {
            int b=__gcd(a[k],a[j]);
            int p=max(b,n);
            n=b;
        }
        cout<<p<<endl;
    }
}
