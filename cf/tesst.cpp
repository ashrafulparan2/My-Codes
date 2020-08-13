#include<bits/stdc++.h>
#define ll long long
using namespace std;
int dist(int x1, int y1, int x2, int y2)
{
    int temp = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    return temp;
}
bool isGood(int a, int b, int c)
{
    int t = a + b - c;
    t *= t;
    if (t < 4 * a * b)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int a = dist(x1, y1, x2, y2);
    int b = dist(x2, y2, x3, y3);
    int c = dist(x1, y1, x3, y3);
    if ((a + b - c == 0 || a + c - b == 0 || b + c - a == 0) && a && b && c)
    {
        cout << "RIGHT" << endl;
        return 0;
    }

    for (int i = 0; i < 4; i++)
    {
        int xn = x1 + dx[i];
        int yn = y1 + dy[i];
        a = dist(xn, yn, x2, y2);
        b = dist(x2, y2, x3, y3);
        c = dist(xn, yn, x3, y3);
        if ((a + b - c == 0 || a + c - b == 0 || b + c - a == 0) && a && b && c)
        {
            cout << "ALMOST" << endl;
            return 0;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        int xn = x2 + dx[i];
        int yn = y2 + dy[i];
        a = dist(x1, y1, xn, yn);
        b = dist(xn, yn, x3, y3);
        c = dist(x1, y1, x3, y3);
        cout<<a<<" "<<b<<" "<<c<<endl;
        if ((a + b - c == 0 || a + c - b == 0 || b + c - a == 0) && a && b && c)
        {
            cout << "ALMOSTyy" << endl;
            return 0;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        int xn = x3 + dx[i];
        int yn = y3 + dy[i];
        a = dist(x1, y1, x2, y2);
        b = dist(x2, y2, xn, yn);
        c = dist(x1, y1, xn, yn);
        if ((a + b - c == 0 || a + c - b == 0 || b + c - a == 0) && a && b && c)
        {
            cout << "ALMOST" << endl;
            return 0;
        }
    }

    cout << "NEITHER" << endl;

    return 0;

}
