#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll a[10001],t,m,n;
    cin>>t;
    while(t--)
    {
        int n,c=0,i,j,m{19};
        cin>>n;
        while(n!=1)
        {
                for(i=3; i<=n; i+=2)
                {
                    if(n%i==0)
                        m=i;
                }
                if(n%m==0)
                {
                    n/=m;
                    c++;
                }
                else
                {
                    n--;
                    c++;
                }
        }

            //cout<<c<<endl;
            if(!c)
                cout<<"FastestFinger"<<endl;
            else
               cout<<"Ashishgup"<<endl;
        }
    }
