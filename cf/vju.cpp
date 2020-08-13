#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cnt = 0;

    int t;
    cin >> t;
    while (t--)
    {
        cnt++;
        int n, n1;
        cin >> n >> n1;
        deque<int> d;
        int x;
        string y;

        cout << "Case " << cnt << ":" << endl;

        for (int i = 0; i < n1; i++)
        {
            cin >> y;
            if (y == "pushRight" || y == "pushLeft")
            {
                cin >> x;
                if (d.size() == n)
                {
                    cout << "The queue is full" << endl;
                }
                else
                {
                    if (y == "pushLeft")
                    {
                        cout << "Pushed in left: " << x << endl;
                        d.push_front(x);
                    }
                    if (y == "pushRight")
                    {
                        cout << "Pushed in right: " << x << endl;
                        d.push_back(x);
                    }
                }
            }
            else
            {
                if (d.size() == 0)
                {
                    cout << "The queue is empty" << endl;
                }
                else
                {
                    if (y == "popLeft")
                    {
                        cout << "Popped from left: " << d.front() << endl;
                        d.pop_front();
                    }
                    if (y == "popRight")
                    {
                        cout << "Popped from right: " << d.back() << endl;
                        d.pop_back();
                    }
                }
            }
        }
        d.clear();
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
