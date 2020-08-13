#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int qf(int x)
{
    int n1=(-1+pow((1+24*x),0.5))/6;
    int n2=(-1+pow((1+24*x),0.5))/6;
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
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n;
        while(n>1)
        {
            cnt++;
            m=qf(n);
            n=n-((3*m*m+m)/2);
        }
        cout<<cnt<<endl;
    }
}
