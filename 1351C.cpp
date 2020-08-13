#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,x{0};
    string s;
    cin>>t;
    while(t--)
    {
        x=0;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='E')
            {
                if(s[i+1]=='W')
                {
                    x++;
                }
                else
                {
                    x+=5;
                }
            }
            if(s[i]=='W')
            {
                if(s[i+1]=='E')
                {
                    x++;
                }
                else
                {
                    x+=5;
                }
            }
            if(s[i]=='N')
            {
                if(s[i+1]=='S')
                {
                    x++;
                }
                else
                {
                    x+=5;
                }
            }
            if(s[i]=='S')
            {
                if(s[i+1]=='N')
                {
                    x++;
                }
                else
                {
                    x+=5;
                }
            }
        }

        cout<<x<<endl;
    }
}
