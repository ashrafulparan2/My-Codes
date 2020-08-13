#include <bits/stdc++.h>
using namespace std;
main()
{
    int a, c, d, t, e, m, n, x, y, z, j, k;
    string s;
    cin >> t;
    while (t--)
    {
        c = 0;
        cin >> m;
        x = 2 * m;
        for (int i = 1; i <= x; i++)
        {
            for (j = 1; j <= x; j++)
            {
                if (i * j == x)
                    c++;
            }
        }
        cout << (c + 1) / 2 << endl;
    }
}