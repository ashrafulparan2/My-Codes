#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int t,cnt=0,cnt2=0;
    string s;
    cin>>t;
    while(t--)
    {
        //cnt=0,cnt2=0;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==1)
            {
                if(s[i+1]==2)
                {
                    cnt++;
                    if(s[i+2]==3)
                    {
                        cnt++;
                        break;
                    }

                }
                if(s[i+1]==3)
                {
                    cnt2++;
                    if(s[i+2]==2)
                    {
                        cnt2++;
                        break;
                    }
                }
            }
        }
        cout<<cnt<<endl;
        cout<<cnt2<<endl;
    }
}
