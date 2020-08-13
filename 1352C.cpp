#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,k,cnt,i,x;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n>>k;
        x=n+1;
        //x=ceil((double)k/n);
        //cnt+=(k+x);
        cnt+=k;
        while(x>n)
        {
            x=ceil((double)k/n);

            cnt+=x;
        }
        cout<<cnt<<endl;
    }
}
