#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x>=70)
    {
        cout<<"Bad weather."<<endl;
    }
    else if(x<=30)
    {
        cout<<"Good weather."<<endl;
    }
    else
    {
        cout <<"\"Confusing weather.\"\n";
    }
}
