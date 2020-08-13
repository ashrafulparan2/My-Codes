#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;



int main()
{
    int n,i;
    string s{};
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    //int x=s.size();
    for(i=0;i<n;i++)
    {
        if(s[i-1]==s[i])
        {
            n--;
        }
    }
    cout<<n<<endl;
}
