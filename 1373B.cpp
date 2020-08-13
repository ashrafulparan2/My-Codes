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
#define yes cout<<"DA"<<endl
#define no cout<<"NET"<<endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string s;
    cin>>t;
    while(t--)
    {
        int c{0},c1{0};
        cin>>s;
        f(i,0,s.size())
        {
            if(s[i]=='0')
            {
                c++;
            }
            else
            {
                c1++;
            }
        }
        if(min(c,c1)%2)
        {
            yes;
        }
        else
            no;

    }

    return 0;
}

