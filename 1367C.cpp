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
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n, a[200000], i, k, l = 0, c = 0, y = 0,o=0;
        string p;
        cin >> n >> k;
        cin >> p;
        for (i = 0; i < n; i++)
        {
            if (p[i] == '1')
            {
                l = 0;
                y = 1;
            }
            else
            {
                l++;
                if (l>k && y==0 && o==0)
                {
                    c=1;
                    l--;
                    o=1;
                }
                if (l > k*2)
                {
                    c++;
                    l = k;
                }
            }
        }
        if (y == 1)
        {if (l>k){c++;}
            cout << c << endl;
        }
        else
        {
            l = 0;
            c = 1;
            for (i = 1; i < n; i++)
            {
                l++;
                if (l > k)
                {
                    c++;
                    l = 0;
                }
            }
            cout << c << endl;
        }
    }
}
