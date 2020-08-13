#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t,n,k,a;
    vector<int> v;
    vector<int> v2;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        while(n--)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]!=v[i+1])
            {
                v2.push_back(v[i]);
            }
        }
        if(v2.size()+1>k)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<n*k<<endl;
            for(auto val:v2)
            {
                cout<<val<<" ";
            }
            for(int i=0;i<k-v2.size();i++)
            {
                cout<<"1 "<<endl;
            }
        }
    }

    return 0;
}
