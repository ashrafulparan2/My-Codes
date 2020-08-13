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

    int n,f{0},th{0},t{0},o{0},x{0};
    cin>>n;
    int a[n];
    f(i,0,n)
    {
        cin>>a[i];
        if(a[i]==4)
        {
            f++;
        }
        else if(a[i]==3)
        {
            th++;
        }
        else if(a[i]==2)
        {
            t++;
        }
        else if(a[i]==1)
        {
            o++;
        }
    }
    if(o-th>0)
    {
        o=o-th;
    }
    else
    {
        o=0;
    }
    if(t%2)
    {
        x=2;
    }
    int y=ceil(((double)o+x)/4);
    cout<<f+th+t/2+y<<endl;

    return 0;
}
