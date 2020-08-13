#include <iostream>
using namespace std;

int sq(int b)
{
    b-=2;
    b/=2;

    return b*(b+1)/2;
}


int main()
{
    int t,b;
    cin>>t;
    while(t--)
    {
        cin>>b;
        cout<<sq(b)<<endl;
    }
}
