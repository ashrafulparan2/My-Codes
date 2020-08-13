/*Bismillahir Rahmanir Rahim
->>Code by Ashraful Islam Paran
->>CUET,CSE
*/
#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
#define loop(a,b,x) for(int a=b;a<x;a++)
#define pb push_back
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t,n,x,y,c0,c1;
    vector<int> a,b,c;
    cin>>t;
    while(t--)
    {
        c0=0;
        c1=0;
        cin>>n;
        loop(i,0,n)
        {
            cin>>x;
            a.pb(x);
        }
        b=a;
        sort(b.begin(),b.end());
        loop(i,0,n)
        {
            cin>>y;
            c.pb(y);
            if(y==1)
            {
                c1++;
            }
            else
            {
                c0++;
            }

        }
        if(c1>0&&c0>0)
        {
            cout<<"YES"<<endl;
        }
        else if(a==b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        a.clear();
        b.clear();
        c.clear();
    }

    return 0;
}
