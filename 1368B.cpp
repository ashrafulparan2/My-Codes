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

#ifndef online_judge
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    ll k;
    cin>>k;
    cout<<"codeforce";
    if(k<=1000000)
    {
        f(i,0,k)
        {
            cout<<"s";
        }
        cout<<endl;
    }
    else if(k<=1000000000000)
    {
        f(i,0,1000000)
        {
            cout<<"s";
        }
        f(i,0,k-1000000)
        {
            cout<<"s";
        }

        cout<<endl;
    }
    else
    {
        f(i,0,1000000)
        {
            cout<<"s";
        }
        f(i,0,1000000)
        {
            cout<<"s";
        }
        f(i,0,k-1000000000000)
        {
            cout<<"s";
        }
    }
}


//return 0;
