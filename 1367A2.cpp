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

    int t;
    cin>>t;
    while(t--)
    {
        string a,b{};
        cin>>a;
        cout<<a[0];
        //f(i,0,a.size())
        for(int i=1;i<a.size()-1;i+=2)
        {
            cout<<a[i];
        }
        cout<<a[a.size()-1]<<endl;
    }

    return 0;
}
