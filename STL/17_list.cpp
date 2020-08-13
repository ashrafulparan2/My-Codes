#include <bits/stdc++.h>
using namespace std;

template <typename t>
void print(list<t> &l)
{
    for (auto x : l)
    {
        cout << x << " ";
    }
    cout << endl;
}
int32_t main()
{
    list<int> l{1, 2, 3, 4, 5, 6, 7};
    list<int> l1(10, 100); //ten 100s
    list<string> s{
        string("hello"),
        "Moe", "curly"};

    cout << l.size() << endl;
    cout << l.max_size() << endl;
    cout << l.front() << endl;
    cout << l.back() << endl;
    print(l);
    print(s);

    l.push_back(8);
    l.push_front(0);

    print(l);

    l.pop_back();
    l.pop_front();

    print(l);

    l.emplace_back(8);
    l.emplace_front(0);

    print(l);

    auto it = find(l.begin(), l.end(), 3);

    l.insert(it, 10);

    print(l);

    l.erase(it);

    print(l);

    l.resize(2);

    print(l);

    l.resize(5);

    print(l);

    return 0;
}
