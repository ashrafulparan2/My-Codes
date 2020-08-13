#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        while(k--)
        {
            for(i=2; i<=n; i++)
            {
                if(n%i==0)
                {
                    n+=i;
                    break;
                }
            }
        }
        cout<<n<<endl;

    }
}
