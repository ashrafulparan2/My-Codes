#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    vector <int> data{};
    for(int i=0; i<t; i++)
    {
        cin>>n;
        data.push_back(n);
    }

    for(auto val:data)
    {
        cout<<val<<endl;
    }
    cout<<endl;

    cout<<endl<<"Histo"<<endl;
    for(auto val:data)
    {
        for(int i=1; i<=val; i++)
        {
            if(i%5==0)
            {
                cout<<"*";
            }
            else
            {
                cout<<"-";
            }
        }

        cout<<endl;
    }
}
