#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x,a,b;
    long long cnt=0;
    cin>>x;
    a=100;
    b=0.01;
    while(a<x)
    {
        long long c=a*b;
        a+=c;
        cnt++;
    }
    cout<<cnt<<endl;
}
