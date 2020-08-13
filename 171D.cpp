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

    int n,m[10001];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>m[i];
    }
    int a,p,q;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        ull a,b,s=0;
        cin>>a>>b;
        for(int i=0; i<n; i++)
        {
            int p=a;
            int q=b;
            if(p==m[i])
            {
                swap(q,m[i]);
            }
            s=s+m[i];
        }
        cout<<s<<endl;
    }

    return 0;
}

