#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(d*2<c||c*2<d||b<=d)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<2*a<<" "<<2*b<<" "<<max(c,d)<<endl;
    }

    return 0;
}
