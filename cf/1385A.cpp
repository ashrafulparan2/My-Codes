#include <bits/stdc++.h>
using namespace std;
#define f(i, x, n) for (int i = x; i < n; i++)
#define int long long
#define endl "\n"
#define yes cout << "Yes" << endl
#define no cout << "No" << endl

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a[3];
        f(i, 0, 3)
        {
            cin >> a[i];
        }
        sort(a, a + 3);
        reverse(a, a + 3);
        if (a[0] != a[1] && a[1] != a[2] && a[2] != a[0])
        {
            no;
        }
        else if (a[1] == a[2] && a[0] != a[1])
        {
            no;
        }
        else if (a[0] == a[1])
        {
            yes;
            cout << "1 " << a[0] << " " << a[2] << endl;
        }
        else
        {
            yes;
            cout << "1 "
                 << "1"
                 << " " << a[2] << endl;
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
