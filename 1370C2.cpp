/*Bismillahir Rahmanir Rahim
->>Code by Ashraful Islam Paran
->>CUET,CSE
*/
#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
typedef unsigned long long ull;
typedef vector<int> vi;
const int MX=2e5+5;
#define f(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define endl "\n"
#define yes cout<<"FastestFinger"<<endl
#define no cout<<"Ashishgup"<<endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,m,n;
    cin>>t;
    while(t--)
    {
        int n,c=0,i,j,m{19};
        cin>>n;
        if(n%2)
        {
            if(n==1)
                yes;
            else
                no;
        }
        else if(n==2)
            no;
        else
        {
            while(n!=1)
            {
                for(i=3; i<=n; i+=2)
                {
                    if(n%i==0)
                    {
                        m=i;
                        break;
                    }
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
                m=19;
            }
            cout<<c<<endl;
            if(c%2 == 0)
                yes;
            else
                no;
        }
    }

    return 0;
}
