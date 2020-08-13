#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    vector<int> v;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=10;n>0;i*=10)
        {
            if(n%i)
            {

                v.push_back((n%i));
                 n=n-(n%i);
            }
        }
        cout<<v.size()<<endl;
        for(auto val:v)
        {
            cout<<val<<" ";
        }
        v.clear();
        cout<<endl;
    }
}
