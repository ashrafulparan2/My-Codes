#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x>y)
        {
            swap(x,y);
        }
        cout<<abs(y*y-x*(x+1))<<endl;
    }
}
