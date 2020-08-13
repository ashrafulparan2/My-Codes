#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t,n,a[101],i,mx{0},x;
    vector<int>m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        mx=-100000;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>mx)
            {
                mx=a[i];
                x=i;
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==mx)
            {
                m.push_back(i+1);
            }

        }
        //cout<<x+1<<endl;
        for(auto val:m)
        {
            cout<<val<<endl;
        }
        m.clear();
    }

    return 0;
}
