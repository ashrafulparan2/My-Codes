#include <bits/stdc++.h>
using namespace std;

int32_t main()
{

    vector<int> v{1, 2, 3, 4, 1, 2, 1, 3, 2};

    int num = count(v.begin(), v.end(), 1);
    int num1 = count(v.begin(), v.end(), 2);
    int num2 = count(v.begin(), v.end(), 3);
    cout << num << endl;
    cout << num1 << endl;
    cout << num2 << endl;

    return 0;
}
