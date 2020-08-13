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

    int t,n,m,a[100][100],i,j,x,c,cn;
    char s;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n>>m;
        for(i=0;i<n;i++)
        {

            for(j=0;j<m;j++)
            {
                //cin>>a[i][j];
                cin>>s;
                x=s-48;
                //cout<<x<<endl;
                if(x==0)
                {
                    c++;
                }
            }
        }
        if(c%2)
        {
            cout<<"Ashish"<<endl;
        }
        else
        {
            cout<<"Vivek"<<endl;
        }
    }

    return 0;
}
