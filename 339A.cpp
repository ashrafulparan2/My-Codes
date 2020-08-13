#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int arr[1000];
    for(int i=0,j=0;i<s.size();i+=2,j++)
    {
        arr[j]=s[i];
    }
    int x=(s.size()/2)+1;
    sort(arr,arr+x);
    for(int j=0;j<x-1;j++)
    {
        cout<<arr[j]-48<<"+";
    }
    cout<<arr[x-1]-48<<endl;

}
