#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[27]{},c{0};
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if((arr[s[i]-'a'])==0)
        {
            c++;
            arr[s[i]-'a']=1;
        }
    }
    if(c%2)
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    else
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
}
