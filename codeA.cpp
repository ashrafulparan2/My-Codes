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

    ll n,a;
    cin>>n>>a;
    f(i,0,a)
    {
        if(n%10==0)
        {
            n/=10;
        }
        else
        {
            n--;
        }
    }
    cout<<n<<endl;

    return 0;
}
