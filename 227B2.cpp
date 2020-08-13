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
#define MX INT_MAX
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,m,sum1{0},sum2{0},a,b;
    cin>>n;
    int pos[n+1];
    loop(i,0,n)
    {
        cin>>a;
        pos[a]=i+1;
    }
    cin>>m;
    loop(i,0,m)
    {
        cin>>b;
        sum1+=pos[b];
        sum2+=n-pos[b]+1;
    }
    cout<<sum1<<" "<<sum2<<endl;

    return 0;
}

