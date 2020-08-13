#include <bits/­stdc++.h>
using namespace std;
main()
{
    int t, m, n, a[100001], b, c, ­d, j, k;
    cin >> t;
    vector<int> v;
    while (t--)
    {
        c = 0;
        cin >> m;
        for (int i = 0; i < 2 * m; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < 2 * m; i++)
        {
            if (a[i] != a[i + 1])
            {
                for (j = 0; j < v.size(); j++)
                {
                    if (a[i] != v[j])
                        c++;
                }
                if (c == v.size())
                    v.push_back(a[i]);
                c = 0;
            }
        }
        for (j = 0; j < v.size(); j++)
        {
            if (a[2 * m - 1] != v[j])
                c++;
        }
        if (c == v.size())
            v.push_back(a[(2 * m) - ­1]);
        for (auto elem : v)
        {
            cout << elem << " ";
        }
        cout << endl;
        v.clear();
    }
}