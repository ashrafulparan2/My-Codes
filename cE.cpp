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
#define f(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define endl "\n"
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    int a[MX]={0},p{0};
    cin>>s;
    f(i,0,s.size())
    {
        a[s[i]]++;
    }
    for(int i=97;i<=122;i++)
    {
        if(a[i]%2)
        {
            p=1;
        }
    }
    if(p)
    {
        no;
    }
    else
        yes;

    return 0;
}

