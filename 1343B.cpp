#include <iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int sum1{0},sum2{0};
        cin>>n;
        if(n%4)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for (int i=2;i<=n+1/2;i+=2)
            {
                sum1+=i;
                cout<<i<<" ";
            }
            //cout<<sum1<<endl;
            for(int i=1;i<=n-2;i+=2)
            //for(int i=1;i<=n;i+=2)
            {
                sum2+=i;
                cout<<i<<" ";

            }
            //cout<<sum2<<endl;
            cout<<sum1-sum2<<endl;

        }
    }
}
