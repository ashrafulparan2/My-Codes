#include <bits/stdc++.h>
#include <cmath>
using namespace std;

long long qf(long long x)
{
    //long long f=pow(1-24*x,0.5)
    long long n1=(-1+(pow(1+24*x,0.5)))/6;
    long long n2=(-1-(pow(1+24*x,0.5)))/6;
    if(n1>=0)
    {
        return n1;
    }
    else
        return n2;
}

int main()
{
    long long t,n,cnt{0},m;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n;
        while(n>1)
        {
            cnt++;
            //m=qf(n);
//cout<<m<<endl;
            n=n-(((3*m*m)+m)/2);
            //cout<<n<<endl;
            if(n<=1)
            {
                break;
            }
        }
        cout<<cnt<<endl;
    }
}
