#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum{0};
    vector <int> vc{1,5,3,4,2,6};
    sort(vc.begin(),vc.end());
    for(auto val:vc)
    {
        cout<<val<<endl;
    }
    cout<<endl;
    reverse(vc.begin(),vc.end());
    for(auto val:vc)
    {
        cout<<val<<endl;
    }

    sum=accumulate(vc.begin(),vc.end(),0);
    cout<<endl;
    cout<<sum<<endl;
}
