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

    int x,n,p[101],a=0,ans=0,b=0,ans2=0,y;
    cin>>x>>n;
    y=x;
    f(i,0,n)
    {
        cin>>p[i];
        if(p[i]==x)
        {
            a=1;
        }
    }
    if(!a)
    {
        cout<<x<<endl;
    }
    else
    {
        while(1)
        {
            b=0;
            x--;
            f(i,0,n)
            {
                if(p[i]!=x)
                {
                    b++;
                }
            }
            if(b==n)
            {
                ans=x;
                break;
            }
        }
        while(1)
        {
            b=0;
            x++;
            f(i,0,n)
            {
                if(p[i]!=x)
                {
                    b++;
                }
            }
            if(b==n)
            {
                ans2=x;
                break;
            }
        }
        if((y-ans)==(ans2-y))
        {
            cout<<min(ans,ans2)<<endl;;
        }
        else if(y-ans<ans2-y)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<ans2<<endl;
        }

    }
    //cout<<ans<<" "<<ans2<<endl;
    //if(x-ans)
    return 0;
}
