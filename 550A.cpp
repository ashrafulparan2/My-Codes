#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x{0},y{0};
    string s;
    cin>>s;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]=='A')
        {
            if(s[i+1]=='B')
            {
                x=1;
                i+=2;
            }
        }
        if(s[i]=='B')
        {
            if(s[i+1]=='A')
            {
                y=1;
                i+=2;
            }
        }
    }
    if(x==1&&y==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
