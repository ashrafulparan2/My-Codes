#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,a[1001];
    cin>>t;
    while(t--)
    {
        int oc{0},ec(0),dc{0};
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0; i<n; i++)
        {
            if(n%2)
            {
                oc++;
            }
            else
            {
                ec++;
            }
        }
        for(int i=0; i<n-1; i++)
        {
            if(a[i+1]-a[i]==1)
            {
                dc++;
            }
        }
        if(n==2)
        {
            if(oc==2||ec==2||dc==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            if(oc>2||ec>2||dc>1||((oc/2+ec/2)+dc)>=2)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }


    }



    return 0;
}
