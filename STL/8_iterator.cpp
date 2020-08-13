#include <bits/stdc++.h>
using namespace std;
int main()
{
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

    return 0;
}
