#include<iostream>
#define ll long long
using namespace std;

int main()
{
    ll  tc;
    cin>>tc;
    while(tc--)
    {
        ll n,x,i,j,k,a,odd=0,even=0;
        cin>>n>>x;
        for(i=0; i<n; i++)
        {
            cin>>a;
            if (a%2==0)
                even++;
            else
                odd++;
        }
        if (odd==0)
            cout<<"No"<<"\n";
        else if (odd%2!=0)
            cout<<"yes"<<"\n";
        else if (n==x)
            cout<<"No"<<"\n";
        else
            cout<<"yes"<<"\n";
    }
}
