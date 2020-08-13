#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c,d,x{0},y{0};
    cin>>a>>b>>c>>d;
    while(a>0)
    {
        a-=d;
        x++;
    }
    while(c>0)
    {
        c-=b;
        y++;
    }
    //cout<<x<<endl;
    //cout<<y<<endl;
    if(x<y)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;

    return 0;
}
