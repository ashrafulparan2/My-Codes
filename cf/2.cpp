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
    #ifndef online_judge
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int cnt{0},c{0};
    string s;
    cin>>s;
    f(i,0,s.size())
    {
        if(s[i]==s[i+1])
        {
            cnt++;
        }
        else
        {
            if(cnt%2)
            {
                c++;
            }
            cnt=0;
        }
    }
    cout<<c<<endl;

    return 0;
}

