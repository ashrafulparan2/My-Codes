#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,m,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;n>1;i++)
        {
            m=floor((sqrt(1+24*n)-1)/6);
            //cout<<m<<endl;
			n=n-((3*m*m+m)/2);
        }
        cout<<i<<endl;
    }
}
