#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='?')
        {
            if(s[i-1]=='D')
            {
                s[i]='P';
            }
            else
            {
                s[i]='D';
            }
        }
    }

    cout<<s<<endl;

    return 0;
}
