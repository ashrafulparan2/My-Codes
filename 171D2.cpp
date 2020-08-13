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

    int n;
    cin>>n;
    int a[n];
    f(i,0,n)
    {
        cin>>a[i];
    }
    int q,b,c;

    cin>>q;
    while(q--)
    {
        ll s{0};
        cin>>b>>c;
        f(i,0,n)
        {
            if(a[i]==b)
            {
                a[i]=c;
            }
            s+=a[i];
        }
        cout<<s<<endl;
    }

    return 0;
}

