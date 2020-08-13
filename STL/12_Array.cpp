#include <bits/stdc++.h>
using namespace std;

int32_t main()
{

    array<int, 5> a{1, 2, 3, 4, 5};

    array<string, 3> s{
        "Larry", "Moe", "curly"};
    cout << s[0] << endl;
    cout << s.size() << endl;
    cout << endl;

    cout << a.at(0) << endl;
    cout << a.front() << endl;
    cout << a.back() << endl;
    cout << endl;

    cout << a.empty() << endl;
    cout << a.max_size() << endl;
    a.fill(10);
    cout << a[1] << endl;

    array<int, 5> a2{5, 4, 1, 6, 7};

    a.swap(a2); //swaps 2 arrays

    cout << a[1] << endl;

    int *it = a.data(); //array address;

    cout << it << endl;

    return 0;
}
