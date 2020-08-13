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

    int n,sum{0},c{0};
    cin>>n;
    int a[n];
    f(i,0,n)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    f(i,0,n)
    {
        sum+=a[i];
        if(sum+a[i+1]>4)
        {
            c++;
            sum=0;
        }
    }
    cout<<c<<endl;

    return 0;
}
