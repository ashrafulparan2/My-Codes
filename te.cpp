#include<bits/stdc++.h>
using namespace std;
main()
{
    string s,d,e;
    cin>>s;
    int t=s.length();
    int n,c=0;
    char p=s[t-1];
    cin>>n;
    int r=n;
    for(int i=0; i<n; i++)
    {
        cin>>d;
        int m=d.length();
        if(p==d[0])
        {
            c++;
            if(c==1)
                e=d;
        }
        p=d[m-1];
    }
    if(c==r)
        cout<<e<<endl;
    else if(c==0)
        cout<<d<<"!"<<endl;
    else if(c<r)
        cout<<"?"<<endl;

}
