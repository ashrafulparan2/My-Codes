#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n=n*(n+1)/2;
        n=n*(n+1)/2;
        cout<<n<<endl;
    }



    return 0;
}
