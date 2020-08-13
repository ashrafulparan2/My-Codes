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

    int n,m,a[10000],b[10000],pos[10000],sum1{0},sum2{0};
    cin>>n;
    loop(i,0,n)
    {
        cin>>a[i];
        pos[a[i]]=i;
    }
    cin>>m;
    loop(i,0,m)
    {
        cin>>b[i];
        sum1+=pos[b[i]];
        sum2+=n-pos[b[i]]+1;
    }
    cout<<sum1<<" "<<sum2<<endl;

    return 0;
}
