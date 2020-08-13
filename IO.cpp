#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t,x,y,c;
    cin>>t;
    while(t--)
    {

        cin>>x>>y;
        if((x==1&&x<y)||(x<=3&&y>3))
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }



    return 0;
}
