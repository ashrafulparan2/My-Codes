#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    string s;
    while(n--)
    {
        fflush(stdin);
        getline(cin,s);

        for(i=0;i<s.size();i++)
        {
            if(s[i]!=s[i+1])
            {
                cout<<s[i];
            }
        }
        cout<<endl;
    }
}
