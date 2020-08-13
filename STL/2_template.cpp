#include <bits/stdc++.h>
using namespace std;

template <typename T>

T mx(T a,T b)
{
    return (a>b)?a:b;
}


int main()
{
    int x{10},y{20};
    int p=mx<int>(x,y);
    cout<<p<<endl;
    cout<<mx<double>(10.4,45.56)<<endl;
    cout<<mx<char>('a','b')<<endl;
}
