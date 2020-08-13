#include <bits/stdc++.h>
using namespace std;
int a[100009], b[100009], k = 1;
map<int, int> ans;
main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
    // online submission
#endif
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == a[i + 1])
        {
            continue;
        }
        else
        {
            ans[a[i]] = n - i + 1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", ans[b[i]]);
    }
    cout << endl;
    return 0;
}