#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    double t,a,b,x;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
            x=2*a*b;
            while(x)
            {
                int y=sqrt(x);
                if(y*y==x)
                {
                    cout<<x<<endl;
                    break;
                }
                else
                {
                    x++;
                }
            }
    }


    return 0;
}

