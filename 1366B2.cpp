/*Bismillahir Rahmanir Rahim
->>Code by Ashraful Islam Paran
->>CUET,CSE
*/

#include<bits/stdc++.h>
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
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,x,m;
        cin >> n >> x >> m;
        int l,r,xl=x,xr=x;
        while(m--)
        {
            cin >> l >> r;
            if(l<=xl && r>=xl)
            {
                xl=min(l,xl),xr=max(r,xr);
            }
            else if(l<=xr && r>=xr)
            {
                xl=min(l,xl),xr=max(xr,r);
            }
        }
        cout << xr-xl+1 << endl;
    }
}
