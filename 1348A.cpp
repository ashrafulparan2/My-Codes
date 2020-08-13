#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t,n,i,x{0},j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n=(n/2)-1;
        x=pow(2,n);
        cout<<4*x-2<<endl;
    }
}
