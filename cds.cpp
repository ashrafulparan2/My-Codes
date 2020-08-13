#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,m;
    cin>>t;
    while(t--)
    {
        cin>>m;
        if(m==1||m==0||m==2)
        {
            cout<<"3"<<endl;
        }
        else if(m%3==0)
        {
            cout<<m<<endl;
        }
        else if(m%3==2)
        {
            cout<<m+1<<endl;
        }
        else if(m%3==1)
        {
            cout<<m-1<<endl;
        }

    }

    return 0;
}
