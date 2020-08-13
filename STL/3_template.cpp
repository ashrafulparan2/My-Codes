#include <bits/stdc++.h>
using namespace std;

template <class T1,class T2>

void func(T1 a, T2 b)
{
    cout<<a<<" "<<b<<endl;
}

int main()
{
    func<int,double>(10,20.2);

    func('A',12.4);
}
