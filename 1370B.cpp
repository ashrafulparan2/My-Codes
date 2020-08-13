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
    ll  t;
    cin>>t;
    while(t--)
    {
        ll n,a[10000],evarr[10000],i,j,even=0,odd=0,k=0,od[10000];
        cin>>n;
        for(i=0;i<2*n;i++)
        {
            cin>>a[i];
            if (a[i]%2==0)
            {evarr[even]=i+1;
            even++;}
            else
            {od[odd]=i+1;
            odd++;}

        }/*

        if *odd
        */
        if (odd%2==0)
        {
            if (odd>0)
            {
                k=1;
                for(i=0;i<odd-2;i=i+2)
                {cout<<od[i]<<" "<<od[i+1]<<"\n";
                }
            }
        }





        else
        {
            for(i=0;i<odd-2;i=i+2)
            {cout<<od[i]<<" "<<od[i+1]<<"\n";
            }
        }
        if (even%2==0)
        {
            if (k==1)
            {
                for(i=0;i<even;i=i+2)
                {cout<<evarr[i]<<" "<<evarr[i+1]<<endl;
                }
            }else
            {
                for(i=0;i<even-2;i=i+2)
                {cout<<evarr[i]<<" "<<evarr[i+1]<<endl;}
            }
        }else
        {
            for(i=0;i<even-2;i=i+2)
            cout<<evarr[i]<<" "<<evarr[i+1]<<"\n";
        }
    }
}
