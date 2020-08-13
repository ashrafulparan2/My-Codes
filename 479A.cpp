#include <iostream>
using namespace std;

int main()
{
    int a,b,c,x;
    cin>>a>>b>>c;
    if(a!=1&&b!=1&&c!=1)
    {
        cout<<a*b*c<<endl;
    }
    else if(a==1&&c==1)
    {
        cout<<a+b+c<<endl;
    }
    else if(a==1&&c!=1)
        cout<<(a+b)*c<<endl;
    else if(b==1)
    {
        if(a>c)
            cout<<(c+b)*a<<endl;
        else
            cout<<(a+b)*c<<endl;
    }
    else if(c==1)
        cout<<(b+c)*a;
}
