#include <bits/stdc++.h>
#include <cmath>
using namespace std;

auto qf(auto x)
{
    auto n1=(-1+pow((1-24*x),0.5))/6;
    auto n2=(-1+pow((1-24*x),0.5))/6;
    if(n1>=0)
    {
        return n1;
    }
    else
        return n2;
}

int main()
{
    auto n{0};
    cin>>n;
    //cout<<(-1+pow((1-24*n),0.5))/6<<endl;
    auto m=qf(n);
    cout<<m<<endl;
}
