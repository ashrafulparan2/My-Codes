#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t,a,b,c{0};
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>a>>b;
        if(a==b)
        {
            cout<<"0"<<endl;
        }
        else if(a>b)
        {
            while(a!=b)
            {
                if(a%8==0)
                {
                    a/=8;
                    c++;
                }
                else if(a%4==0)
                {
                    a/=4;
                    c++;
                }
                else if(a%2==0)
                {
                    a/=2;
                    c++;
                }
                else
                {
                    c=-1;
                    break;
                }
            }
            cout<<c<<endl;
        }
        else
        {
            while(a!=b)
            {
                if(a*8<=b)
                {
                    a*=8;
                    c++;
                }
                else if(a*4<=b)
                {
                    a*=4;
                    c++;
                }
                else if(a*2<=b)
                {
                    a*=2;
                    c++;
                }
                else
                {
                    c=-1;
                    break;
                }
            }
            cout<<c<<endl;
        }
    }

    return 0;
}
