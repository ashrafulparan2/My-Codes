#include <bits/stdc++.h>
using namespace std;

template <typename t1, typename t2>

void print(unordered_multimap<t1, t2> &m)
{
    for (auto x : m)
    {
        cout << x.first << " => ";
        cout << x.second << endl;
    }
    cout << endl;
}

int32_t main()
{

    unordered_multimap<string, int> m1{
        {"larry", 28},
        {"Moe", 25}};

    unordered_multimap<string, string> m{
        {"Bob", "Butcher"},
        {"Bob", "Baker"},
        {"Alice", "Maker"}};

    cout << m.size() << endl;
    cout << m.max_size() << endl;

    // front or back unavailable

    m.insert(make_pair("Roger", "Ranger"));

    cout << m.size() << endl;

    print(m);
}