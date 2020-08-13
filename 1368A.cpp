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

    ll t,a,b,n;
    cin>>t;
    while(t--)
    {
        int cnt{0};
        cin>>a>>b>>n;
        while(a<=n)
        {
            if(a>b)
            {
                swap(a,b);

            }
            a+=b;
            cnt++;
            //cout<<a<<endl;
            if(a>n)
                break;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
