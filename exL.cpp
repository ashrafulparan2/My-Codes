#include <cstdio>
#include <string>
#include<iostream>
using namespace std;
int main()
{
    long long t,a,b,c,d,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        scanf("%lld%lld%lld",&b,&c,&d);
        a=(2*c)-b-d;
        cout<<a<<endl;
    }
}

