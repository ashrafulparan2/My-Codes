#include <iostream>
#include <cmath>
using namespace std;

/*fact(int x)
{
    if(x==0)
        return 1;
    return x*fact(x-1);
}
*/
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n!=k)
            cout<<7<<endl;
        else
            cout<<1<<endl;
    }
}
