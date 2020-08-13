#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;
int main()
{
    double x;
    string s;
    cin>>x>>s;
    if(x>=4.00)
    {
        cout<<"Welcome to RCCIPSC family."<<endl;
    }
    else if(x>=3.00)
    {
        if(s=="science")
        {
            cout<<"Your GPA is low. You can study in commerce department."<<endl;
        }
        else
        {
            cout<<"Welcome to RCCIPSC family."<<endl;
        }
    }
    else if(x>=2.50)
    {
        if(s=="science"||s=="commerce")
        {
            cout<<"Your GPA is low. You can study in humanities department."<<endl;
        }
    }
    else
    {
        cout<<"Try out another college."<<endl;
    }
}
