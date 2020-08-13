#include <bits/stdc++.h>
using namespace std;

#define no cout<<"No"<<endl;
#define yes cout<<"Yes"<<endl;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,x,a[1001];

    cin>>t;
    while(t--)
    {
        int oc{0},ec{0};
        cin>>n>>x;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2)
            {
                oc++;
            }
            else
            {
                ec++;
            }
        }

            if(oc==0)
            {
                no;
            }
            else if(oc==n&&x%2==0)
            {
                no;
            }
            else if(oc%2)
            {
                yes;
            }
            else if(n==x)
            {
                no;
            }
            else
            {
                yes;
            }
    }



    return 0;
}
