#include <bits/stdc++.h>
#include <string>
using namespace std;

template <class T>

T mn(T a,T b)
{
    return (a<b)?a:b;
}

template <typename T1,typename T2>

void  func(T1 a,T2 b)
{
    cout<<a<<" "<<b<<endl;
}

struct person{
    string name;
    int age;
};

int main()
{
    person p1{"Carl",27};
    person p2{"James",15};


    cout<<mn<int>(2,3)<<endl;
    cout<<mn(2,3)<<endl;
    cout<<mn('A','B')<<endl;
    cout<<mn(12.5,9.3)<<endl;
    cout<<mn(5+2*2,7+40)<<endl;

    cout<<endl;


}
