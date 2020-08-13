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
#define f(a,b,x) for(int a=b;a<x;a++)
#define pb push_back
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,s{0},sum{0},ans{0};
    cin>>n;
    int a[n];
    f(i,0,7)
    {
        cin>>a[i];
        s+=a[i];
    }
    if(s<n)
    {
        int x=ceil((double)n/s)-1;
        n=n-x*s;
    }
    //cout<<n<<endl;
    f(i,0,7)
    {
        sum+=a[i];
        if(sum>=n)
        {
            ans=i+1;
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}

