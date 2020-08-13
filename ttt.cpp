#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n,x[1000],i;
    string s;
    cin>>n;
    cin>>s;

    for(i=0;i<n;i++)
    {
    x[i]= count(s.begin(),s.end(),s[i]);
    cout<<x[i]<<endl;
    }


}
