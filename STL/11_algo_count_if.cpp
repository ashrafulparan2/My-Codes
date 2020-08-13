#include <bits/stdc++.h>
using namespace std;

int32_t main()
{

    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 1};
    int num = count_if(vec.begin(), vec.end(), [](int x) { return x % 2 == 0; });
    cout << num << endl;
    int num1 = count_if(vec.begin(), vec.end(), [](int x) { return x % 2 != 0; });
    cout << num1 << endl;
    int num2 = count_if(vec.begin(), vec.end(), [](int x) { return x >= 5; });
    cout << num2 << endl;

    replace(vec.begin(), vec.end(), 1, 100);

    for (auto x : vec)
    {
        cout << x << endl;
    }

    if (all_of(vec.begin(), vec.end(), [](int x) { return x > 1; }))
    {
        cout << "All" << endl;
    }
    else
    {
        cout << "NOPE" << endl;
    }
    if (all_of(vec.begin(), vec.end(), [](int x) { return x > 5; }))
    {
        cout << "All" << endl;
    }
    else
    {
        cout << "NOPE" << endl;
    }

    string s{"This is a test"};
    cout << s << endl;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;

    return 0;
}
