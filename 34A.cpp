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

    int n,mn{MX},a1,a2,x,y;
    cin>>n;
    int a[n],b[n];
    f(i,0,n)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    f(i,0,n-1)
    {
        if(a[i+1]-a[i]<mn)
        {
            mn=a[i+1]-a[i];
            a1=a[i];
            a2=a[i+1];
        }
    }
    cout<<a1<<" "<<a2<<endl;
    if(a1==a2)
    {
        f(i,0,n)
        {
            if(b[i]==a1)
            {
                x=i+1;
                break;
            }
        }
        f(i,0,n)
        {
            if(b[i]==a1)
            {
                y=i+1;
            }
        }
    }
    else
    {

        f(i,0,n)
        {
            if(b[i]==a1)
            {
                x=i+1;
            }
            if(b[i]==a2)
            {
                y=i+1;
            }
        }
    }

    cout<<x<<" "<<y<<endl;


    return 0;
}

