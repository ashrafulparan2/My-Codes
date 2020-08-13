#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#else
    // online submission
#endif

    vector<int> v{1, 2, 3};
    vector<int>::iterator it1 = v.begin();
    list<string>::iterator it2;
    map<string, string>::iterator it3;
    set<char>::iterator it4;

    while (it1 != v.end())
    {
        cout << *it1 << endl;
        it1++;
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    //vector<int> ve{1,2,3};
    vector<int>::reverse_iterator x = v.rbegin();

    while (x != v.rend())
    {
        cout << *x << endl;
        x++;
    }


    return 0;
}
