#include <bits/stdc++.h>
using namespace std;

int32_t main()
{

    vector<int> v{1, 2, 3};
    vector<int>::const_iterator it = v.begin();
    //or
    //auto it = v.cbegin();

    while (it != v.end())
    {
        cout << *it << endl;
        it++;
    }

    list<string> name{"Lary", "Moe", "Curly"};
    auto it2 = name.crbegin();
    cout << *it2 << endl;
    it2++;
    cout << *it2 << endl;

    map<string, string> favourites{
        {"Frank", "C++"},
        {"Bill", "Java"},
        {"James", "Python"}};

    auto it3 = favourites.begin();
    while (it3 != favourites.end())
    {
        cout << it3->first << " : " << it3->second << endl;
        it3++;
    }

    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto start = vec.begin() + 2;
    auto finish = vec.end() - 3;
    while (start != finish)
    {
        cout << *start << endl;
        start++;
    }

    return 0;
}
