#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t,n,s,m{0},i;

    vector<int> v;
    vector<int> v2;

    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n--)
        {
            cin>>s;
            v.push_back(s);
        }
        auto x=*max_element(v.begin(),v.end());
        //cout<<x<<endl;
        sort(v.begin(),v.end());
        for(i=1; i<=1023; i++)
        {
            for(auto val:v)
            {
                v2.push_back(val^i);
            }
            sort(v2.begin(),v2.end());
            if(v==v2)
            {
                cout<<i<<endl;
                //i--;
                i=0;
                break;
            }

            v2.clear();
        }
        //cout<<i<<endl;
        if(i>1023)
        {
            cout<<"-1"<<endl;
        }

        v.clear();
        v2.clear();


    }

    return 0;
}
