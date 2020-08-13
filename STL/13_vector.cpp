#include <bits/stdc++.h>
using namespace std;

int32_t main()
{

    vector<int> v{1, 2, 3, 4, 5};

    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << v.max_size() << endl;
    cout << v.at(0) << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;
    v.push_back(6);
    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << endl;
    v.pop_back();
    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << endl;
    v.pop_back();
    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << endl;
    v.emplace_back(2);
    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    vector<int> v1{1, 2, 3, 4, 5};
    vector<int> v2{3, 4, 5, 6};

    v1.swap(v2);

    for (auto val : v1)
    {
        cout << val << " ";
    }
    cout << endl;

    auto it = find(v1.begin(), v1.end(), 3);
    v1.insert(it, 100);
    for (auto val : v1)
    {
        cout << val << " ";
    }
    cout << endl;
    auto it2 = find(v1.begin(), v1.end(), 5);
    //insert(it2, v2.begin(), v2.end());

    //Display vector using lambda expression

    for_each(v1.begin(), v1.end(), [](int x) { cout << x << " "; });
    cout << endl;

    vector<int> vec{1, 2, 3, 4, 5};
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    vec.push_back(6);
    vec.push_back(7);
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    vec.shrink_to_fit();
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    vec.pop_back();
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    vec.reserve(100);
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    vec.clear();
    vec = {1, 2, 3, 4, 5};
    vec.erase(vec.begin(), vec.begin() + 2);
    for (auto val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    vec.clear();
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

    cout<<vec.size()<<endl;

    return 0;
}
