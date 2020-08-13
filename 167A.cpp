#include <bits/stdc++.h>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
    int cnt{0};
    string a,b;
    cin>>a>>b;

    int x=a.size();
    for(int i=0;i<x;i++)
    {
        if(a[i]==b[i])
            cnt++;
    }
    if(cnt==x)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
