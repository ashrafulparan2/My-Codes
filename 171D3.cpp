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
    int n;
    cin>>n;
    int a[n],d[MX];
    ll s{0};
    f(i,0,n)
    {
        cin>>a[i];
        s+=a[i];
        d[a[i]]++;
    }
    //cout<<s<<endl;
    int q,b,c;

    cin>>q;
    while(q--)
    {
        //s=0;
        int h{0};
        cin>>b>>c;

        h=d[b];
        d[b]=0;
        d[c]+=h;
        s+=h*(c-b);
        //cout<<h<<" "<<c<<" "<<b<<endl;

        cout<<s<<endl;
    }


    return 0;
}

