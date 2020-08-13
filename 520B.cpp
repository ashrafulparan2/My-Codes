#include <iostream>
using namespace std;

int main()
{
    int n,m,cnt{0};
    cin>>n>>m;
    if(n>m)
    {
        cout<<n-m<<endl;
    }
    else
    {
        while(n<m)
        {
            if(m%2)
            {
                m++;
                cnt++;
            }
            else
            {
                m=m/2;
                cnt++;
            }
        }
        cout<<n-m+cnt<<endl;
    }
}
