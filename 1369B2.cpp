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

    int t,n;
    cin>>t;
    while(t--)
    {
        int c{1};
        string s,ans{""};
        cin>>n>>s;
        f(i,0,s.size()-1)
        {
            if(s[i]>s[i+1])
                c=0;

        }
        if(c)
        {
            cout<<s<<endl;
        }
        else
        {
            f(i,0,s.size())
            {
                if(s[i]=='1')
                {
                    break;
                }
                ans+='0';
            }
            ans+='0';
            //f(i,0,s.size())
            for(int i=s.size()-1; i>=0; i--)
            {
                if(s[i]=='0')
                {
                    break;
                }
                ans+='1';
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}

