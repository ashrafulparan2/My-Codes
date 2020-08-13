#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t,a,b,x,c{0},d,e;
    cin>>t;
    while(t--)
    {
        cin>>d>>e;

        if(d>e)
        {
            a=d;
            b=e;
        }
        else
        {
            a=e;
            b=d;
        }
        if((a%b)||(d!=1&&e==1))
        {
            cout<<"-1"<<endl;
        }
        else if(d==1)
        {
            c=0;
            x=e/d;
            while(x!=1)
            {
                if(x%8==0)
                {
                    x=x/8;
                    c++;
                }
                else if(x%4==0)
                {
                    x=x/4;
                    c++;
                }
                else if(x%2==0)
                {
                    x=x/2;
                    c++;
                }
                else if(x%8||x%4||x%2)
                {
                    cout<<"-1"<<endl;
                    break;
                    //return 0;
                }
            }
            cout<<c<<endl;
        }

        else
        {
            c=0;
            x=a/b;
            while(x!=1)
            {
                if(x%8==0)
                {
                    x=x/8;
                    c++;
                }
                else if(x%4==0)
                {
                    x=x/4;
                    c++;
                }
                else if(x%2==0)
                {
                    x=x/2;
                    c++;
                }
            }
            cout<<c<<endl;
        }
    }

    return 0;
}
