#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c;
    string s,r{},t{};
    cin>>s;
    for(int i=0;i<s.size();i++)
    {

        if(s[i]=='x')
        {
            b=i;
            break;
        }
        r+=s[i];
    }
    for(int i=b+2;i<s.size();i++)
    {

        if(s[i]=='x')
        {
            break;
        }
        t+=s[i];
    }
    a=stoi(r);
    c=stoi(t);
    cout<<a*2<<"x+"<<c<<endl;

    return 0;
}
