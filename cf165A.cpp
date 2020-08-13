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

    int n,p{0},q{0},r{0},s{0},cnt{0};
    cin>>n;
    int a[n],b[n];
    f(i,0,n)
    {
        cin>>a[i]>>b[i];
    }
    f(i,0,n)
    {
        f(j,0,n)
        {
            if(a[j]>a[i]&&b[i]==b[j])
            {
                //p++;
                p=1;
            }
            if(a[j]<a[i]&&b[i]==b[j])
            {
                //q++;
                q=1;
            }
            if(a[i]==a[j]&&b[i]<b[j])
            {
                //r++;
                r=1;
            }
            if(a[i]==a[j]&&b[i]>b[j])
            {
                //s++;
                s=1;
            }
        }
        if(p&&q&&r&&s)
        {
            cnt++;
        }
        p=0;q=0;r=0;s=0;
    }
    //cout<<p<<" "<<q<<" "<<r<<" "<<s<<endl;
    cout<<cnt<<endl;

    return 0;
}

