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

    int t,n,a;
    cin>>t;
    while(t--)
    {
        int c{0},b{0};
        cin>>n;
        f(i,0,n)
        {
            cin>>a;
            if(a%2!=i%2)
            {
                (a%2)?c++:b++;
            }
        }
        if(c!=b)
        {
            cout<<"-1"<<endl;
        }
        else
            cout<<c<<endl;
    }

    return 0;
}
