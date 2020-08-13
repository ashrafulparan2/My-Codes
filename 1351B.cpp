#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    double t,a,b,c,d,s,x;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        s=(a*b)+(c*d);
        x=floor(pow(s,0.5));
        if(a==b||a==c||a==d||b==c||c==d||b==d)
        {
            if(x*x==s)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
