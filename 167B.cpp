#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,k,x{0};
    cin>>a>>b>>c>>k;
    if(k<a)
    {
        x=k;
    }
    else
    {
        x=a;
    }

    if(k-a-b>0)
    {
        x+=(k-a-b)*(-1);
    }
    cout<<x<<endl;
}
