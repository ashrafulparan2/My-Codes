/*Bismillahir Rahmanir Rahim
->>Code by Ashraful Islam Paran
->>CUET,CSE
*/

#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
typedef unsigned long long ull;
typedef vector<int> vi;
const int MX = 2e5 + 5;
#define f(a, b, x) for (int a = b; a < x; a++)
#define pb push_back
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, x;
    cin >> n;
    while (n--)
    {
        int cnt{0};
        cin >> x;
        ll y = sqrt(x);
        if (y * y != x || y == x)
        {
            cnt = 1;
        }
        else if (y % 2 == 0 && y != 2)
        {
            cnt = 1;
        }
        else
        {
            for (int i = 3; i <= sqrt(y); i += 2)
            {
                if (y % i == 0)
                {
                    cnt++;
                    break;
                }
            }
        }
        if (!cnt)
        {
            yes;
        }
        else
            no;
    }

    return 0;
}