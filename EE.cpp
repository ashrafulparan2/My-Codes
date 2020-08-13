#include <iostream>
using namespace std;

int main()
{
    int n,x,d,a[111],i,j,m,cnt{0},sum{0};
    cin>>n>>x>>d;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        for(j=n-1;j>=0;j++)
        {
            m=a[i]-j*d;
            //sum+=m;
            if(m<0)
            {
                m=0;
                cnt++;
            }
            else if(m<x)
            {
                cnt++;
            }
            else
            {
                cnt++;
                break;
            }
        }

    }
    cout<<cnt<<endl;

}
