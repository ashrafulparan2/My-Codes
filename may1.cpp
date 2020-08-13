#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string s;
    string x;
    string y;
    int n,b,cnt{0};
    cin>>s;
    cin>>n;
    int r=s.length()-1;
    char a=s[r];
    for(int i=0;i<n;i++)
    {
        cin>>x;
        b=x.length()-1;
        if(a==x[0])
        {
            cnt++;
            if(cnt==1)
            {
                y=x;
            }

            a=x[b];

        }
    }
    if(cnt==0)
    {
        cout<<"?"<<endl;
    }
    else if(cnt==1)
    {
        cout<<y<<"!"<<endl;
    }
    else
    {
        cout<<y<<endl;
    }

    //cout<<cnt<<endl;

    return 0;
}
