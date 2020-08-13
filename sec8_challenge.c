#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a;
    b=a/100;
    c=(a%100)/25;
    d=((a%100)%25)/5;
    e=((a%100)%25)%5;
    cout<<b<<'\n'<<c<<'\n'<<d<<'\n'<<e<<endl;
}
