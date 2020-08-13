#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    vector<int> vec;
    vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto i = vec.begin();
    while (i != vec.end())
    {
        if (*i % 2 == 0)
        {
            vec.erase(i);
        }
        else
        {
            i++;
        }
    }
    for (auto val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << vec.size() << endl;

    vector<int> v1{1, 2, 3, 4, 5};
    vector<int> v2{10, 20};

    copy(v1.begin(), v1.end(), back_inserter(v2));

    for (auto val : v2)
    {
        cout << val << " ";
    }
    cout << endl;

    v1.clear();
    v2.clear();

    v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    v2 = {10, 20};

    copy_if(v1.begin(), v1.end(), back_inserter(v2), [](int x) { return x % 2 == 0; });

    for (auto val : v2)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
