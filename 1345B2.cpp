#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    long long t,n,x,y,cnt;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n++;
        //here:
        x=(log(n)/log(2));
        if(pow(2,x)==n)
        {
            //cnt++;
            cout<<"1"<<endl;
        }
        else if(pow(2,x)>n)
        {
            n=n-pow(2,x);
            n++;
            y=(log(n)/log(2));
            while(pow(2,y)!=n)
            {
                n=n-pow(2,x);
                n++;
                y=(log(n)/log(2));
                cnt++;
            }
            cout<<cnt+1<<endl;
        }
    }
}
