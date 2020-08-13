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
#define MX 200000
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define vi vector<int>

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll i, k;
        string x;
        cin >> x;
        k = x.size();
        cout << x[0];
        for (i = 1; i < k - 1; i = i + 2)
        {
            cout << x[i];
        }
        cout << x[k - 1] << endl;
    }
}
