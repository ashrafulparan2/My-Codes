#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
#define pb push_back
#define endl "\n"

int main()
{
#ifndef online_judge
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n{0},i{0},t[1000000],z{0},neg{0},pos{0},neg1{0},pos1{0},mn=1000000000;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>t[i];
        if(t[i]==0)
        {
            z++;
        }
        if(t[i]<0)
        {
            neg++;
        }
        if(t[i]>0)
        {
            pos++;
        }
    }
    for(i=0; i<n; i++)
    {
        if(t[i]<0)
        {
            neg1++;
        }
        if(t[i]>0)
        {
            pos1++;
        }
        if(i!=n-1)
        {
            mn=min(mn,pos1+neg-neg1+z);
        }

    }
    cout<<mn<<endl;

    return 0;
}
