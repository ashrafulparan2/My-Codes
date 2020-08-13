#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t,x,y,a,b,p,q;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>a>>b;
        p=(x<y)?x:y;
        q=(x>y)?x:y;
        if(2*a<b)
            cout<<q*a+p*a<<endl;
        else
            cout<<(q-p)*a+p*b<<endl;
    }
}
