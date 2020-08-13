#include <bits/stdc++.h>
using namespace std;

template <typename t>
void print(unordered_multiset<t> &l)
{
    for (auto x : l)
    {
        cout << x << " ";
    }
    cout << endl;
}

int32_t main()
{
    
    unordered_multiset <int> s{2,2,1,1,3,4,5};

    print(s);
    
    return 0;
}
