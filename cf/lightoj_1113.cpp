#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ":" << endl;
        stack<string> bk, fd;
        bk.push("http://www.lightoj.com/");

        while (1)
        {
            string x, y;
            cin >> x;
            if (x == "VISIT")
            {
                cin >> y;
                bk.push(y);
                cout << bk.top() << endl;
                while (!fd.empty())
                    fd.pop();
            }
            else if (x == "BACK")
            {
                if (bk.size() <= 1)
                    cout << "Ignored" << endl;
                else
                {
                    fd.push(bk.top());
                    bk.pop();
                    cout << bk.top() << endl;
                }
            }
            else if (x == "FORWARD")
            {
                if (fd.empty())
                    cout << "Ignored" << endl;
                else
                {
                    bk.push(fd.top());
                    fd.pop();
                    cout << bk.top() << endl;
                }
            }
            else
                break;
        }
    }

    return 0;
}
