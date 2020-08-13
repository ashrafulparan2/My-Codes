#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,k;
    cin>>a>>b>>c>>k;
    if(a+b==k)
        cout<<a<<endl;
    else if(k<a)
        cout<<k<<endl;
    else if(a+b<k)
    {
       int d=k-a-b;
       int e=d*(-1);
       int f=a+e;
       cout<<f<<endl;
    }
}
