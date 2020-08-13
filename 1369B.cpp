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

    ll t;
    cin >> t;
    while(t--)
    {
        ll i,n,z=0,m,j,y=0;
        string str,s="";
        cin>>n;
        cin>>str;
        j=0;
        for(i=n-1; i>=0; i--)
        {
            if (str[i]=='1')
                j++;
            else
                break;
        }
        m=j;

        for(i=0; i<n; i++)
        {
            if (str[i]=='0' && y==0)
            {
                s+='0';
            }
            else if (str[i]=='0' && y==2 && z==0)
            {
                s+=str[i];
                z=1;
            }
            else  if (z==0)
                y=2;
            else
                break;
        }
        for(i=0; i<m; i++)
            s+='1';
        if (s.size()==0)
        {
            cout<<"0\n";
        }
        else
            cout<<s<<"\n";
    }
}
