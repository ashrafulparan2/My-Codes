#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<=30)
    {
        cout<<"Ok"<<endl;
    }
    else if(n>30&&n<55)
    {
        cout<<(n-30)/5<<" Demerit point"<<endl;
    }
    else if(n>=55)
    {
        cout<<"License cancel"<<endl;
    }
}
