#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,a,b,c,d;
    cin>>x;
    while(x++)
    {
        a=x%10;
        b=((x-a)/10)%10;
        c=((x-a-b*10)/100)%10;
        d=x/1000;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
        {
            cout<<x<<endl;
            break;
        }
    }

}
