#include <iostream>
using namespace std;

int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        int sum{0};
        cin>>n;
        for(int i=1;i>0;i*=2)
        {

            sum+=i;
            if(sum==1)
            {
                cout<<"1"<<endl;
            }
            else if((n%sum)==0&&sum!=1)
            {
                x=n/sum;

                break;
            }
        }

    }
}
