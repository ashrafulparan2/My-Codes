#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t,a,b,c,d,e,p,s;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d>>e>>p;
        s=(a+b+c+d+e)*p;
        if(s>120)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }


    return 0;
}
