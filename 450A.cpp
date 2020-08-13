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
#define f(a,b,x) for(int a=b;a<x;a++)
#define pb push_back
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m,mx=0,ans;
    cin>>n>>m;
    int a[n];
    f(i,0,n)
    {
        cin>>a[i];
        int f=ceil(a[i]/(double)m);
        mx=max(mx,f);
        //cout<<mx<<" " <<f<<endl;
        if(mx==f)
        {
            ans=i+1;
        }
    }
    cout<<ans<<endl;

    return 0;
}
