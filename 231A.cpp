#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,x{0};
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        if(a+b+c>1)
        {
            x++;
        }
    }
    cout<<x<<endl;
}
