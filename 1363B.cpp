/*Bismillahir Rahmanir Rahim
->>Code by Ashraful Islam Paran
->>CUET,CSE
*/
#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
#define f(a,b,x) for(int a=b;a<x;a++)
#define pb push_back
#define endl "\n"
#define MX 200000
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string s;
    cin>>t;
    while(t--)
    {
        int t0=0,t1=0,p1=0,p0=0;
        cin>>s;
        f(i,0,s.size())
        {
            if(s[i]=='0')
                t0++;
            else
                t1++;
        }
        int ans=min(t0,t1);
        f(i,0,s.size())
        {
            if(s[i]=='0')
            {
                t0--;
                p0++;
            }

            else
            {
                t1--;
                p1++;
            }

            ans=min(min(ans,t0+p1),min(ans,t1+p0));
            //ans=;
            //cout<<t0<<" "<<t1<<" "<<p0<<" "<<p1<<" "<<endl;
            //cout<<ans<<endl<<endl;

        }

        cout<<ans<<endl;
    }

    return 0;
}
