#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        while(n>0)
        {
            cout<<n--<<" ";
        }
        cout<<endl;
    }
}
