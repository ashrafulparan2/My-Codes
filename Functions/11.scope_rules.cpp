#include <bits/stdc++.h>
using namespace std;

void local()
{
    int num{5000};
    cout<<num<<endl;
    num+=1000;
    cout<<num<<endl;
    cout<<endl;
}
void staticlocal()
{
    static int num{5000};
    cout<<num<<endl;
    num+=1000;
    cout<<num<<endl;
    cout<<endl;
}

int main()
{
    local();
    local();
    local();
    staticlocal();
    staticlocal();
    staticlocal();


    return 0;
}
