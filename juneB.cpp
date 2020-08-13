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
#define MX INT_MAX
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define vi vector<int>

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
        int c1{0},c2{0},c3{0},c4{0};
        cin>>s;
            f(i,0,s.size()-1)
            {
                if((s[i]=='x'&&s[i+1]=='y')||(s[i]=='y'&&s[i+1]=='x'))
                {
                    c1++;
                    i++;
                }
            }

        cout<<c1<<endl;
    }

    return 0;
}
