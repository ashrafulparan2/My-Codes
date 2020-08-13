#include <iostream>
using namespace std;

int main()
{
    int t,n,i,j,x,c{0},y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=2; i<n; i++)
        {
            int c=0;
            for(j=1; j<=i; j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }

            if(c==2)
            {
                x=i;
            }
        }
        for(i=n+1; i>0; i++)
        {
            int c=0;
            for(j=1; j<=i; j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }

            if(c==2)
            {
                y=i;
                break;
            }
        }

        cout<<x<<" "<<y<<endl;
    }
}
