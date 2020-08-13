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
#define MX INT_MAX
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a==0||b==0)
        {
            cout<<"0"<<endl;
        }
        else if(a/2>=b)
        {
            cout<<b<<endl;
        }
        else if(b/2>=a)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<(a+b)/3<<endl;
        }
    }

    return 0;
}
