
/*Bismillahir Rahmanir Rahim
->>Code by Ashraful Islam Paran
->>CUET,CSE
*/
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef int64_t ll;
#define loop(a,b,x) for(int a=b;a<x;a++)
#define pb push_back
#define endl "\n"
#define MX INT_MAX
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,sum=0,x,c=0;
    cin>>n;
    loop(i,0,n)
    {
        cin>>x;
        sum+=x;
    }
    loop(i,1,6)
    {
        if((sum+i)%(n+1)!=1)
        {
            c++;
        }
    }
    cout<<c<<endl;

    return 0;
}
