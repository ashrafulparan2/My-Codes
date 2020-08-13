#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector <long long> vc{1,2,3,4,5,6};
    /*vc.push_back(2);
    vc.push_back(3);
    vc.push_back(4);
    vc.push_back(5);
    vc.push_back(6);*/

    auto lb=upper_bound(vc.begin(),vc.end(),5);
    cout<<lb-vc.begin()<<endl;
}
