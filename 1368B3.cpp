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

    ll n;
    int k=2,s{10},p;
    string x="codeforces";
    cin>>n;
    while(pow(k,10)<n)
    {
        k++;
    }
    p=k-1;
    while(pow(k,s)*pow(p,10-s)>n)
    {
        s--;
    }
    if(pow(k,s)*pow(p,10-s)<n)
    {
        s++;
    }
    //cout<<k<<" "<<p<<" "<<s<<endl;
    f(i,0,10)
    {
        if(s)
        {
            cout<<x[i];
            s--;
        }
        f(j,0,p)
        {
            cout<<x[i];
        }
    }

    return 0;
}
