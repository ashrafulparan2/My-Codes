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

    int t,n,m,x,y,c{0};
    string s;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n>>m>>x>>y;
        y=min(y,2*x);
        while(n--)
        {
            cin>>s;
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='.')
                {
                    if(s[i+1]=='.'&&i+1<s.size())
                    {
                        c+=y;
                        i++;

                    }
                    else
                    {
                        c+=x;
                    }
                }
            }
        }

        cout<<c<<endl;
    }

    return 0;
}
