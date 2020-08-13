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

int fun(int x1, int y1, int x2, int y2)
{
    int ans = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    return ans;
}

int right(int a, int b, int c)
{
    if (a + b == c || b + c == a || c + a == b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
    // online submission
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x1, y1, x2, y2, x3, y3, a, b, c;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    a = fun(x1, y1, x2, y2);
    b = fun(x1, y1, x3, y3);
    c = fun(x2, y2, x3, y3);

    int p = right(a, b, c);
    if (p && a && b && c)
    {
        cout << "RIGHT" << endl;
        return 0;
    }

    f(i, 0, 4)
    {
        int x = x1 + dx[i];
        int y = y1 + dy[i];
        a = fun(x, y, x2, y2);
        b = fun(x, y, x3, y3);
        c = fun(x2, y2, x3, y3);

        int p = right(a, b, c);
        if (p && a && b && c)
        {
            cout << "ALMOST" << endl;
            return 0;
        }
    }

    f(i, 0, 4)
    {
        int x = x2 + dx[i];
        int y = y2 + dy[i];
        a = fun(x1, y1, x, y);
        b = fun(x1, y1, x3, y3);
        c = fun(x, y, x3, y3);
        int p = right(a, b, c);
        //cout << a << " " << b << " " << c << endl;
        if (p && a && b && c)
        {
            cout << "ALMOST" << endl;
            return 0;
        }
    }

    f(i, 0, 4)
    {
        int x = x3 + dx[i];
        int y = y3 + dy[i];
        a = fun(x1, y1, x2, y2);
        b = fun(x1, y1, x, y);
        c = fun(x2, y2, x, y);
        int p = right(a, b, c);
        if (p && a && b && c)
        {
            cout << "ALMOST" << endl;
            return 0;
        }
    }

    cout << "NEITHER" << endl;

    return 0;
}
