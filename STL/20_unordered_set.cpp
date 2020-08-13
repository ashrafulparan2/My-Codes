#include <bits/stdc++.h>
using namespace std;

template <typename t>
void print(unordered_set<t> &l)
{
    for (auto x : l)
    {
        cout << x << " ";
    }
    cout << endl;
}

int32_t main()
{
    
    unordered_set<int> s{5,4,3,2,1};
    print(s);
    
    return 0;
}
