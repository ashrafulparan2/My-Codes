#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int i,j,x{0};
    string s;
    cin>>s;
    int n=s.size();
    for(i=0; i<n-1; i++)
    {
        if(s[i]=='A'&&s[i+1]=='B')
        {
            for(j=i+2; j<n-1; j++)
            {
                if(s[j]=='B'&&s[j+1]=='A')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }

            }
        }
    }
    for(i=0; i<n-1; i++)
    {
        if(s[i]=='B'&&s[i+1]=='A')
        {
            for(j=i+2; j<n-1; j++)
            {
                if(s[j]=='A'&&s[j+1]=='B')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }

            }
        }
    }

    cout<<"NO"<<endl;

    return 0;
}
