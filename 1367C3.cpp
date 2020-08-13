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

    int t,n,k;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>s;
        int d=k,c=0;
        f(i,0,s.size())
        {
            if(s[i]=='0')
            {
                d++;
            }
            else
            {
                d-=k;
                c+=d/(k+1);
                d=0;
            }
        }
        cout<<c+d/(k+1)<<endl;
    }

    return 0;
}
