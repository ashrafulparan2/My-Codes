#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int t,n,k,i,a[31],b[31],s1,s2,s3,s4;

    cin>>t;
    while(t--)
    {
        s1=0,s2=0,s3=0,s4=0;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(b,b+n);
        sort(a,a+n);
        reverse(b,b+n);
        reverse(a,a+n);

        for(i=0;i<n-k;i++)
        {
            s1+=a[i];
            s3+=b[i];
        }
        for(i=0;i<k;i++)
        {
            s2+=b[i];
            s4+=a[i];
        }
        if((s1+s2)>(s3+s4))
        {
            cout<<s1+s2<<endl;
        }
        else
        {
            cout<<s3+s4<<endl;
        }

    }
}
