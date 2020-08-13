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
#define MX 200000
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define vi vector<int>

int main()
{
    #ifndef online_judge
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t,n,x;
    cin>>t;
    while(t--)
    {
        x=1;
        cin>>n;
        int a[200000];
        loop(i,0,n)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        loop(i,0,n)
        {
            if(i+1>=a[i])
            {
                x=i+2;
            }
        }
        cout<<x<<endl;
    }

    return 0;
}
