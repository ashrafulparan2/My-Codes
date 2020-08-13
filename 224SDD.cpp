#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,a,b,i,x=0;
    cin>>k>>a>>b;
    for(i=a;i<=b;i++)
    {
        if(i%k==0)
        {
            cout<<"OK"<<endl;
            x=0;
            break;
        }
        else
        {
            x=1;
        }

    }
    if(x==1)
        cout<<"NG"<<endl;
}