#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,c,d;
    long long x;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(a-b<=0)
        {
            cout<<b<<endl;
        }
        else if(c-d<=0)
        {
            cout<<"-1"<<endl;
        }
        else if(a-b>0&&c-d>0)
        {
            x=ceil((((double)a-b)/(c-d))*1.0);

            cout<<(b+x*c)<<endl;
        }
    }
}
