#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,k,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        x=k-1;
        if(n>k)
        {
            if((n%2&&k%2)||n%2==0&&k%2==0)
            {
                cout<<"YES"<<endl;
                while(x--)
                {
                    cout<<"1 ";
                }
                cout<<n-k+1<<endl;
            }
            else if(n%2==0&&k%2)
            {

                if((n/k)>=2)
                {
                    cout<<"YES"<<endl;
                    while(x--)
                    {
                        cout<<"2 ";
                    }
                    cout<<n-((k-1)*2)<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
            else if(n%2&&k%2==0)
            {
                cout<<"NO"<<endl;
            }

        }
        else if(n==k)
        {
            cout<<"YES"<<endl;
            while(k--)
            {
                cout<<"1 ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
