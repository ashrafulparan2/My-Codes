#include <bits/stdc++.h>
using namespace std;

int32_t main()
{

    array<int, 5> arr1{1, 3, 3, 4, 5};
    array<int, 5> arr2;
    for (auto it : arr1)
    {
        cout << it << endl;
    }
    for (auto it : arr2)
    {
        cout << it << endl; //garbage value
    }

    cout << arr1.front() << " " << arr1.back() << endl;

    auto mn = min_element(arr1.begin(), arr1.end());
    auto mx = max_element(arr1.begin(), arr1.end());

    cout << *mn << " " << *mx << endl;

    auto adjacent = adjacent_find(arr1.begin(), arr1.end());
    if (adjacent != arr1.end())
    {
        cout << *adjacent << endl;
    }

    int sum = accumulate(arr1.begin(), arr1.end(), 0);
    cout << sum << endl;

    int cnt = count(arr1.begin(), arr1.end(), 3);
    cout << cnt << endl;
    
    //Lambda
    
    int c = count_if(arr1.begin(), arr1.end(), [](int x) { return x > 1 && x < 4; });
    cout << c << endl;

    return 0;
}
