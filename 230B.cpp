#include <iostream>
using namespace std;

int main()
{
    int n,x,count=0;
    cin>>n;
    while(n--)
    {
        count=0;
        cin>>x;
        for(int i=2; i<=x/2; i++)
        {
            if(x%i==0)
            {
                count++;
            }
        }
        if(count==1)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

}
