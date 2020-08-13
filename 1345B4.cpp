#include <bits/stdc++.h>
#include <cmath>
using namespace std;

double qf(double x)
{
    double n1,n2;
    if((1-24*x)>=0)
    {
        n1=(-1+pow((1-24*x),0.5))/6;
        n2=(-1+pow((1-24*x),0.5))/6;
    }
    if(n1>=0)
    {
        return n1;
    }
    else
        return n2;
}

int main()
{
    int t,n,cnt{0},m;
    double q;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n;
        while(n>1)
        {
            cnt++;
            q=qf(n);
            m=q;
            cout<<m<<endl;
            n-=((3*m*m+m)/2);
        }
        cout<<cnt<<endl;
    }
}
