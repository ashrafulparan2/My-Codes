#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t,n,k,a[101];
    set<int> s;

    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        if(s.size()>k)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<n*k<<endl;
            while(n--)
            {
                for(auto val:s)
                {
                    cout<<val<<" ";
                }
                for(int i=0;i<k-s.size();i++)
                {
                    cout<<"1 ";
                }

            }
            cout<<endl;
        }
        s.clear();
    }

    return 0;
}
