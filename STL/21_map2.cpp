#include <bits/stdc++.h>
using namespace std;

template <typename t1, typename t2>

void print(map<t1, t2> &m)
{
    for (auto x : m)
    {
        cout << x.first << " => ";
        cout << x.second << endl;
    }
    cout << endl;
}

void print(map<string, set<int>> &m)
{
    for (auto x : m)
    {
        cout << x.first << " => ";
        for (auto y : x.second)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int32_t main()
{

    map<string, int> m{
        {"larry", 28},
        {"Moe", 25},
        {"Curly", 22}};
    print(m);

    m.insert(pair<string, int>("Anna", 16));

    print(m);

    m.insert(make_pair("Joe", 20));

    print(m);

    m["Frank"] = 18;

    print(m);

    m["Frank"] += 3;

    print(m);

    m.erase("larry");

    print(m);

    cout << m.count("Joe") << endl;
    cout << m.count("larry") << endl;

    map<string, set<int>> a{
        {"Larry", {100, 90}},
        {"Moe", {94}},
        {"Curly", {80, 90, 99}}};

    print(a);

    a["Larry"].insert(78);

    print(a);

    auto it = a.find("Moe");
    if (it != a.end())
    {
        it->second.insert(1000);
    }

    print(a);
}