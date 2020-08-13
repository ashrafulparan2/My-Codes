#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> nums {1,2,3};
    nums.push_back(4);
    nums.push_back(5);
    cin>>nums.at(2);
    cout<<nums.at(4)<<endl;
    cout<<nums.size()<<endl;
    //add anopther element
    int x;
    cin>>x;
    nums.push_back(x);
    cout<<nums.size()<<endl;
}
