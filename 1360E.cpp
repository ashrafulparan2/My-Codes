#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
#define pb push_back


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t,n,x,a[51][51];
    char c;
    cin>>t;
    while(t--)
    {
        x=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>c;
                a[i][j]=c-48;
            }
        }
        for(int i=n-2;i>=0;i--)
        {
            for(int j=n-2;j>=0;j--)
            {
                if(a[i][j]==1&&a[i+1][j]==0&&a[i][j+1]==0)
                {
                    x=1;

                }
            }
        }
        if(x)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
