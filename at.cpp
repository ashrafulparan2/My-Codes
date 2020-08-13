#include <iostream>
using namespace std;

int main()
{
    int n,m,a,sum=0;
    cin>>n>>m;
    while(m--)
    {
        cin>>a;
        sum+=a;
    }
    if(sum>=0)
    {
        cout<<n-sum<<endl;
    }
    else
        cout<<"-1"<<endl;
    return 0;
}
