#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000],mn{1000},mx{0},i,x,y;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>mx)
        {
            mx=a[i];
            x=i;
        }
        if(a[i]<=mn)
        {
            mn=a[i];
            y=i;
        }
    }
    if(x<=y)
        cout<<n-1-y+x<<endl;
    else
        cout<<n-2-y+x<<endl;
}
