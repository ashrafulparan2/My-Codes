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
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t;
    cin>>t;
    while(t--)
    {
        int p=0,q=0,i,k;
        cin>>k;
        string x;
        cin>>x;
        for(i=0;i<k;i++)
        {
            if (x[i]==')')
            {
                if (p<=0)
                q++;
                else
                p--;
            }
            else
            {p++;}
        }
        cout<<(p+q)/2<<"\n";
    }
}
