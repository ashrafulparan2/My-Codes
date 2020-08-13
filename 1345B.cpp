#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    long long t,n,x,cnt{0};
    while(t--)
    {
        cin>>n;
        n++;
        //while(1)


            cnt=0;
            here:
            x=log(n)/log(2);
            //cout<<x<<endl;
            if(pow(2,x)==n)
            {
                cnt++;
                //break;
                //cout<<"1"<<endl;
            }
            else
            {
                cnt++;
                n=n-pow(2,x);
                goto here;

        }

        cout<<cnt<<endl;
    }

}
