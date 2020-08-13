#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, c = 0, d = 0, e = 0, f{0};
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "AC")
            c++;
        else if (s == "WA")
            d++;
        else if (s == "TLE")
            e++;
        else
            f++;
    }
    cout << "AC x " << c << endl;
    cout << "WA x " << d << endl;
    cout << "TLE x " << e << endl;
    cout << "RE x " << f << endl;
}