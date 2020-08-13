#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int cnt{0};

    unsigned long long x=1;
    for(int i=1;i<=111;i++)
    {
        x*=i;
        //cout<<i<<endl;
        //cout<<x<<endl;
        if(x%10)
        {
            cnt++;
            x/=10;
        }

    }
    cout<<cnt<<endl;
}
