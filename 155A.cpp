#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,mn{0},mx{0},c{0};
    cin>>n;
    n--;
    cin>>y;
    mn=y;
    mx=y;
    while(n--)
    {
        cin>>x;
        if(x>mx)
        {
            mx=x;
            c++;
        }
        if(x<mn)
        {
            mn=x;
            c++;
        }
    }
    cout<<c<<endl;
}
