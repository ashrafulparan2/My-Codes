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

    string a, b, c;
    cin >> a >> b >> c;
    int n = c.size() - 1;
    if (c[n] == 'a')
    {
        cout << "A" << endl;
    }
    else if (c[n] == 'c')
    {
        cout << "C" << endl;
    }
    else
    {
        cout << "B" << endl;
    }

    return 0;
}
