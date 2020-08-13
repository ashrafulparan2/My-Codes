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

    double a,b,c,x,y,z;
    cin>>a>>b>>c;
    x=sqrt(a*b/c);
    y=sqrt(b*c/a);
    z=sqrt(a*c/b);
    cout<<4*(x+y+z)<<endl;


    return 0;
}

