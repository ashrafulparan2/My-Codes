#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    double t,a,b,x;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(b>a)
        {
            swap(a,b);
        }
        if(2*b<a)
        {
            cout<<a*a<<endl;
        }
        else
        {
            cout<<4*b*b<<endl;

        }
    }


    return 0;
}
