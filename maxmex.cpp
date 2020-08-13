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
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t,m,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ll a[n],dif{0},x{0},c{0};
        f(i,0,n)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        f(i,1,n)
        {
            if(a[i]==m)
            {
                x=1;
                break;
            }
            else if(a[i]<m)
            {
            dif=a[i]-a[i-1];
            if(dif!=1)
            {
                c=1;
                break;
            }
            }
        }
        if(c)
        {
            cout<<"-1"<<endl;
        }
        else if(x)
        {
            cout<<n-1<<endl;
        }
        else
            cout<<n<<endl;
    }

    return 0;
}

