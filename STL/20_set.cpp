#include <bits/stdc++.h>
using namespace std;

template <typename t>
void print(set<t> &l)
{
    for (auto x : l)
    {
        cout << x << " ";
    }
    cout << endl;
}

int32_t main()
{

    set<int> s{1, 2, 3, 4, 5};
    set<string> s2{"Larry", "moe", "Curly"};

    print(s);
    print(s2);

    s = {5, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 5, 5, 3, 2, 1};

    print(s);

    cout << s.size() << endl;
    cout << s.max_size() << endl;

    // front or back unavailable

    s.insert(6);

    print(s);

    vector<int> v;
    for (auto x : s)
    {
        v.push_back(x);
    }

    cout << v[1] << endl;

    s.erase(3);

    print(s);

    auto it = s.find(5);
    if (it != s.end())
    {
        s.erase(it);
    }

    print(s);
    int x = s.count(1);
    cout << x << endl;

    s.clear();

    x = s.empty();

    cout << x << endl;

    set<string> set{"A", "B", "D"};

    print(set);

    auto result = set.insert("C");

    print(set);

    cout << *result.first << endl;
    cout << result.second << endl;

    result = set.insert("A");

    print(set);

    cout << *result.first << endl;
    cout << result.second << endl;

    return 0;
}
