#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <vector <int>> vector1
    {

        {
            1,2,3
        },
        {
            3,4,5,6
        },
        {
            5,6,7,8,9
        }

    };

    for(auto vec: vector1)
    {
        for(auto val:vec)
        {
            cout<<val<<" ";
        }

        cout<<endl;
    }


}
