#include <bits/stdc++.h>
using namespace std;

int isprime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return i;
        }
        return 0;
    }
}


int main()
{
    long long t,n,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        while(k--)
        {
            if(isprime(n)==0)
            {
                n=n*2;
            }
            else
            {
                n+=isprime(n);
            }
        }
        cout<<n<<endl;

    }
}

