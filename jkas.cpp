#include <bits/stdc++.h>
#define faster     ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define read       freopen("input.txt", "r", stdin);
#define write      freopen("output.txt", "w", stdout);
#define end        '\n'
#define ll         long long
using namespace std;
int main()
{
    read;
    write;

    long long int t,x;
    cin>>t;
    long long int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    if(t==a)
        x=b;
    else if(t==b)
        x=a;
    else
        x=t;
    if(x==c)
        x=d;
    else if(x==d)
        x=c;
    if(x==e)
        x=f;
    else if(x==f)
        x=e;
    cout<<x<<endl;
}

