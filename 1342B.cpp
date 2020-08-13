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

    int t;
    cin>>t;
    while(t--)
    {
        int c0{0},c1{0};
        string s;
        cin>>s;
        int x=s.size();
        f(i,0,x)
        {
            if(s[i]=='0')
            {
                c0++;
            }
            else
                c1++;
        }
        if(!c1||!c0)
        {
            cout<<s<<endl;
        }
        else if(c1>c0)
        {
            while(x--)
            {
                cout<<"10";
            }
            cout<<endl;
        }
        else if(c0>c1)
        {
            while(x--)
            {
                cout<<"01";
            }
            cout<<endl;
        }
        else
        {
            if(s[0]=='1')
            {
                while(x--)
                {
                    cout<<"10";
                }
                cout<<endl;
            }
            else
            {
                while(x--)
                {
                    cout<<"01";
                }
                cout<<endl;
            }
        }
    }

    return 0;
}

