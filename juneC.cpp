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

    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+5],c{0},x{0};
        f(i,0,n)
        {
            cin>>a[i];
        }
        if(a[0]==5)
        {
            c+=5;

        }
        else
        {
            x=1;
            goto here;
        }
        f(i,1,n)
        {
            if(a[i]==5)
            {
                c+=5;
            }
            else if(a[i]-c==5)
            {
                c+=5;
            }
            else
            {
                x=1;
                break;
            }
        }
        here:
        if(x)
        {
            no;
        }
        else
        {
            yes;
        }
    }

    return 0;
}
