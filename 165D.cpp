#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    double a,b,n,mx=0,x{0};
    cin>>a>>b>>n;

    for(int i=n;i>0;i--)
    {
        x=floor((a*i)/b)-a*(floor(x/b));
        if(x>mx)
        {
            mx=x;
        }
    }
    cout<<mx<<endl;
}
