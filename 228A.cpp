#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,x{0};
    cin>>a>>b>>c>>d;
    if(a)
    {
        x++;
    }
    if(b!=a)
    {
        x++;
    }
    if(c!=b&&c!=a)
    {
        x++;
    }
    if(d!=a&&d!=b&&d!=c)
    {
        x++;
    }

    cout<<4-x<<endl;
}
