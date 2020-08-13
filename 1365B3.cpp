#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
#define pb push_back
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t,n,a[100000],b[100000],i,x,y,temp;
    vector<int> v;
    vector<int> v2;
    vector<int> v3;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            //cin>>b[i];
            v.pb(x);
        }
        v3=v;
        sort(v3.begin(),v3.end());
        for(i=0;i<n;i++)
        {
            //cin>>a[i];
            //cin>>b[i];
            cin>>y;
            v2.pb(y);
        }
        for(i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                if((v[i]>v[j])&&(v2[i]!=v2[j]))
            {
                swap(v[i],v[j]);
                swap(v2[i],v2[j]);
            }
            }


        }
        if(v==v3)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        v.clear();
        v2.clear();
        v3.clear();
    }

    return 0;
}

