#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int n,k,a,cnt{0},i,x;
    vector <int> d;
    cin>>n>>k;
    for(i=0;i<k;i++)
    {
        cin>>x;
        d.push_back(x);
        while(x--)
        {
            cin>>a;
        }
    }
    sort(d.begin(),d.end());

    for(i=0;i<k;i++)
    {
        if(d[i]!=d[i+1])
        {
            cnt++;
        }
    }
    cout<<n-cnt<<endl;
}
