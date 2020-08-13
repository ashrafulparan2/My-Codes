#include <bits/stdc++.h>

double cost(double base,double rate=0.06);

double cost(double base,double rate)
{
    return base+base*rate;
}

using namespace std;
int main()
{
    cout<<cost(200)<<endl;
    cout<<cost(100,0.08);
}
