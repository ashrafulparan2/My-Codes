#include <bits/stdc++.h>
using namespace std;

template <typename t>
void print(forward_list<t> &l)
{
    for (auto x : l)
    {
        cout << x << " ";
    }
    cout << endl;
}

int32_t main()
{
    forward_list<int> l{1, 2, 3, 4, 5};

    // l.size() is not available

    cout << l.max_size() << endl;
    cout << l.front() << endl;

    // l.back() is not available

    l.push_front(0);

    print(l);

    l.pop_front();

    print(l);

    l.emplace_front(0);

    print(l);

    auto it = find(l.begin(), l.end(), 3);

    l.insert_after(it,10);
    print(l);

    l.emplace_after(it,100);
    print(l);

    l.erase_after(it);
    print(l);

    l.resize(2);
    print(l);

    l.resize(5);
    print(l);

    return 0;
}
