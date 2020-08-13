#include <bits/stdc++.h>
using namespace std;

int isprime(int n)
{
    int isprime=1;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            isprime=0;
            break;
        }
    }
    return isprime;
}


int main()
{
    int n,m,x;
    cin>>n>>m;
    for(int i=n+1;i>0;i++)
    {
        if(isprime(i)!=0)
        {
            x=i;
            break;
        }
    }
    if(x==m)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
