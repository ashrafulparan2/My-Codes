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

    int n,m,s{0},cnt{0};
    cin>>n>>m;
    int a[n];
    f(i,0,n)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);

    f(i,0,n)
    {
        s+=a[i];
        if(s>=m)
        {
            cnt++;
            break;
        }
        cnt++;

    }
    cout<<cnt<<endl;

    return 0;
}

