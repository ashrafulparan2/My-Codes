#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,c,d,e=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a<=b)
        {
            if(a%2==0)
                cout<<1<<endl;
            else
                cout<<a<<endl;
        }
        else
        {
            c=a/b;
            d=a%b;
            if(d==0)
                cout<<c<<endl;
            else if(d%2==0)
                cout<<c+1<<endl;
            else
                cout<<c+d/(d-1)+1<<endl;
        }
    }
    /*code by Aimon
    CSE,CUET*/

}
