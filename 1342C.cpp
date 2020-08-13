#include <iostream>
using namespace std;

int main()
{
    long long t,a,b,q,l,r,cnt{0};
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>q;
        while(q--)
        {
            cnt=0;
            cin>>l>>r;
            for(int i=l;i<=r;i++)
            {
                if((i%a)%b!=(i%b)%a)
                {
                   // cout<<i<<endl;
                   cnt++;
                }
                //cout<<cnt<<endl;
            }
            cout<<cnt<<endl;
        }
    }
}
