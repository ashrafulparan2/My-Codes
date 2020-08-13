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

    ll n,m ,k,l,o,s{0},c{0};
    cin>>n>>m>>k;
    int a[MX];
    for(int i=1;i<=2*n;i+=2)
    {
        cin>>a[i];
    }
    for(int i=2;i<=2*m;i+=2)
    {
        cin>>a[i];
    }
    int x=3*max(n,m);
    f(i,0,x)
    {
        if(a[i]!=0)
        {
            s+=a[i];
            if(s>k)
            {
                break;
            }
            c++;
        }
    }

    cout<<c<<endl;
    //v.clear();
    //t.clear();

    return 0;
}


