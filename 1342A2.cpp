#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long x,a,b,m,n,t,s;
    cin>>x;
    while(x--)
    {
        cin>>a>>b>>m>>n;
        if(b>a)
        {
            t=a;
            a=b;
            b=t;
        }
        if(2*m<n)
        {
            s=a*m+b*m;
        }
        else
        {
            s=b*n+(a-b)*m;
        }

        cout<<s<<endl;
}
}

