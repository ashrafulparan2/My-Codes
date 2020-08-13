#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,s[10000],d=100000;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        sort(s,s+n);

        d=100000;

        for(int i=0;i<n-1;i++)
        {
            if((s[i+1]-s[i])<d)
            {
                d=s[i+1]-s[i];
                //cout<<d<<endl;
            }
        }
        cout<<d<<endl;
    }



    return 0;
}
