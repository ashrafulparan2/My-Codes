#include <iostream>
using namespace std;

int main()
{
    int t,n,a,b,c,d,x,y,p,q;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>c>>d;
        x=n*(a+b);
        y=n*(a-b);
        p=c+d;
        q=c-d;


        if(y>p||x<q)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
