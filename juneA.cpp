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

    int t,n,k,s1,s2;
    cin>>t;
    while(t--)
    {
        s1=0;s2=0;
        cin>>n>>k;
        int p[n];
        f(i,0,n)
        {
            cin>>p[i];
            s1+=p[i];
        }
        f(i,0,n)
        {
            if(p[i]>k)
            {
                p[i]=k;
            }
            s2+=p[i];
        }
        cout<<s1-s2<<endl;
    }

    return 0;
}
