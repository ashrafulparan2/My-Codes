#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,m{0},x{0};
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        x+=b-a;
        if(x>m)
        {
            m=x;
        }
    }
    cout<<m<<endl;
}
