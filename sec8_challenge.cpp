#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d,e,f;
    cin>>a;
    b=a/100;
    c=(a%100)/25;
    d=((a%100)%25)/10;
    e=(((a%100)%25)%10)/5;
    f=(((a%100)%25)%10)%5;
    cout<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f<<endl;
}

