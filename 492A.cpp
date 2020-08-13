#include <iostream>
using namespace std;

int main()
{
    int n,sum{0},x{0},cnt{0};
    cin>>n;
    for(int i=1;i>0;i++)
    {
        sum+=i;
        x+=sum;
        if(x<=n)
        {
            cnt++;
        }
        else
            break;
    }
    //cout<<sum<<endl;
    cout<<cnt<<endl;
}
