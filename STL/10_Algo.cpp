#include <bits/stdc++.h>
using namespace std;

int32_t main()
{

    vector<int> v{5, 9, 8};
    auto it = find(v.begin(), v.end(), 9);

    if (it != v.end())
    {
        cout << *it << endl;
    } 

    vector<int> vec{1, 2, 3, 4};

    //Lambdas
    for_each(vec.begin(), vec.end(),
             [](int x) { cout << x * x * 2 << endl; });

    return 0;
}
