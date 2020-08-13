#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
typedef unsigned long long ull;
typedef vector<int> vi;
const int MX = 2e5 + 5;
#define f(i, x, n) for (int i = x; i < n; i++)
#define pb push_back
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int func(int x)
{
    if(x%2==0)
    {
        return func(x/2);
    }
    else if(x==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}


int main()
{
#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#else
    // online submission
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    int a=func(n);
    //cout<<a<<endl;
    if(a)
    {
        yes;
        
    }
    else
    {
        no;
    }
    
    
    
    return 0;
}
