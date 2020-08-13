#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t,n,k,a[101],b[101],i,j,m,l;
    cin>>t;
    while(t--)
    {
        cin>>n,k;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        i=0;
        b[0]=a[0];
        for(int k=1;k<n;k++)
        {
            if(a[k]!=a[k-1])
            {
                i++;
                b[i]=a[k];
            }
        }
        if(i+1>k)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<n*k<<endl;
            for(j=1;j<=n;j++)
            {
                for(int k=0;k<=i;k++)
                {
                    cout<<b[k]<<" ";
                }
                for(l=1;l<=k-(i+1);l++)
                {
                    cout<<"1"<<" ";
                }
            }
            cout<<endl;
        }
    }

    return 0;
}
