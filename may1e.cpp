#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string s;
    string x;
    string y;
    string f;
    vector<string> v;
    int n,b[1000],cnt{0},p{0},q,t;
    cin>>s;
    cin>>n;
    char d;
    int r=s.length()-1;
    char a=s[r];
    char c[1000];
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);

        if(a==v[i][0])
        {
            y=v[i];
            b[i]=v[i].length();
            c[i]=v[i][b[i]-1];
            t=v[i].length();
            d=v[i][t-1];
            cnt++;
            q=i;
        }
    }
    //cout<<q<<endl;
    //cout<<c[0]<<endl;
    //cout<<c[1]<<endl;
    //cout<<d<<endl;
    if(cnt==1)
    {
        for(int i=0; i<n; i++)
        {
            if(i==q)
            {
                continue;
            }
            if(v[i][0]==d)
            {
                p=1;
            }

        }
    }
    else if(cnt>1)
    {
        for(int i=0; i<n; i++)
        {
            //if(v[i][0]==v[i][[v[i].length()-1])
            if(v[i][0]==c[i])
            {
                f=v[i];
            }
        }
    }




    //cout<<cnt<<endl;
    //cout<<p<<endl;

    if(cnt>1)
    {
        cout<<f<<endl;
    }

    else if(cnt==1&&p==1)
    {
        cout<<y<<endl;
    }
    else if(cnt==1)
    {
        cout<<y<<"!"<<endl;
    }
    else
    {
        cout<<"?"<<endl;
    }


    return 0;
}

