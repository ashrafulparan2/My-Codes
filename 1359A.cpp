#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
#define pb push_back
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t,n,m,k,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        if(n/k>=m)
        {
            cout<<m<<endl;
        }
        else
        {
            x=n/k-ceil((m-(double)n/k)/(k-1));
            cout<<x<<endl;
        }
    }

    return 0;
}
