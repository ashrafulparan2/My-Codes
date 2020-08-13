/*Bismillahir Rahmanir Rahim
->>Code by Ashraful Islam Paran
->>CUET,CSE
*/
#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
#define loop(a,b,x) for(int a=b;a<x;a++)
#define pb push_back
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,a[200000],b[200000],c[200000],pos[200000],d,x{0};
    cin>>n;
    loop(i,0,n)
    {
        cin>>a[i];
    }
    loop(i,0,n)
    {
        cin>>b[i];
        pos[b[i]]=i;
    }
    loop(i,0,n)
    {
        d=i-pos[a[i]];
        if(d<0)
        {
            d+=n;
        }
        c[d]++;
        x=max(x,c[d]);

    }
    cout<<x<<endl;

    return 0;
}
