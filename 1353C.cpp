#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n=n/2;
        cout<<(8*n*(n+1)*(2*n+1))/6<<endl;
    }
}
